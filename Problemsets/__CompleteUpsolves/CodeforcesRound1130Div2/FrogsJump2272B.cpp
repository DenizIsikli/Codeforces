#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;
    string a,b;
    cin>>n>>a>>b;
    int f=count(a.begin(),a.end(),'f')+count(b.begin(),b.end(),'f');
    cout<<f%2<<endl;
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
