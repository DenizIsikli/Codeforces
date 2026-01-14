#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void solve(){
    int s,k,m;
    cin>>s>>k>>m;
    if(s>k&&m/k%2!=0)s=k;
    cout<<max(s-m%k,0)<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
