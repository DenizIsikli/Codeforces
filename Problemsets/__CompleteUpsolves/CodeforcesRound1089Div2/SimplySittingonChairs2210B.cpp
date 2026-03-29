#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n,x;
    cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++){
        cin>>x;
        if(i>=x)ans++;
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
