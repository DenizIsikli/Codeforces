#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int x;cin>>x;
    int y=1;
    while(x>0){
        y*=10;
        x/=10;
    }
    cout<<y+1<<endl;
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
