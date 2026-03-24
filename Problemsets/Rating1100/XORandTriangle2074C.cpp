#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int y;
void solve(){
    int n;cin>>n;
    y=(n&-n)|(~n&-~n);
    cout<<(y<n?y:-1)<<endl;
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
