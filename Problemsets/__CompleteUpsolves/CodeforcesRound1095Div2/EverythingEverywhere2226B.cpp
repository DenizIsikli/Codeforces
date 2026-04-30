#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int ans=0;
    for(int i=0;i<n-1;i++)if(a[i]%(a[i]-a[i+1])==0)ans++;
    cout<<ans<<endl;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
