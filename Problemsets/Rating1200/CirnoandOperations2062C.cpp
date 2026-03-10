#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;
    cin>>n;
    int ans=0;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++){cin>>a[i];ans+=a[i];}
    for(int i=1;i<n;i++){
        ans=max(ans,abs(a[i]-a[n]));
        for(int j=n;j>i;j--){
            a[j]-=a[j-1];
        }
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
