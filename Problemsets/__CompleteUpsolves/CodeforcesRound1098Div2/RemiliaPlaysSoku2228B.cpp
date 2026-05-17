#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n,x1,x2,k;
    cin>>n>>x1>>x2>>k;
    if(n<=3){cout<<1<<endl;return;}
    cout<<min(abs(x1-x2),n-abs(x1-x2))+k<<endl;
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
