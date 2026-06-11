#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    float n,x,y,z;
    cin>>n>>x>>y>>z;
    float c=ceil(n/(x+y));
    float c1=ceil((n-x*z)/(x+y*10))+z;
    cout<<min(c,c1)<<endl;
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
