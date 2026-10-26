#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int a[105];
void solve(){
    int n,k,ans=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)if(a[i]==ans&&i>=ans*k+k)ans++;
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
