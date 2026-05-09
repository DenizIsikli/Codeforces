#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int l,r,d;
    cin>>l>>r>>d;
    if(d<l)cout<<d<<endl;
    else cout<<(r/d+1)*d<<endl;
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
