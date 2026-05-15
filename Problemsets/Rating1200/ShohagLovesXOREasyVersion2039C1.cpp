#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int x,m;
    cin>>x>>m;
    int ans=0;
    for(int y=1;y<=min(2LL*x,m);y++){
        if(x!=y&&((x%(x^y))==0||(y%(x^y)==0)))ans++;
    }
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
