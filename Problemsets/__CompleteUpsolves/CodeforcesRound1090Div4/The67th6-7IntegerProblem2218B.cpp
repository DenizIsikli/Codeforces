#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int ans=0,mx=INT_MIN;
    for(int i=0;i<7;i++){
        int x;cin>>x;
        ans+=-x;
        mx=max(mx,x);
    }
    cout<<ans+(mx*2)<<endl;
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
