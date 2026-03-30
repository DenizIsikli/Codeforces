#include <bits/stdc++.h>
#include <cstdlib>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;
    cin>>n;
    int ans=0;
    vector<int>a(n+2,1);
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++){
        if(lcm(gcd(a[i-1],a[i]),gcd(a[i+1],a[i]))<a[i])ans++;
    }
    cout<<ans<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
