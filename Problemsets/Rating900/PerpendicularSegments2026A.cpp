#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int x,y,k,m;
    cin>>x>>y>>k;m=min(x,y);
    cout<<"0 0 "<<m<<" "<<m<<endl;
    cout<<"0 "<<m<<" "<<m<<" 0"<<endl;
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
