#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int x,y,z;
    cin>>x>>y>>z;
    char c=(x>=y&&x>=z)?'P':(y>=z)?'R':'S';
    cout<<string(x+y+z,c)<<endl;
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
