#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(auto&x:a)cin>>x;
    int mx=*max_element(a.begin(),a.end());
    int mn=*min_element(a.begin(),a.end());
    cout<<(mx-mn+1)/2<<endl;
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
