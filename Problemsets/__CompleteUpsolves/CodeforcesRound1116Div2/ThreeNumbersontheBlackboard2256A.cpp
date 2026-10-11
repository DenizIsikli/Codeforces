#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int a[3];
void solve(){
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    cout<<min(a[1],a[2]-a[0])<<endl;
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
