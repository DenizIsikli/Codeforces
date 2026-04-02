#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    vector<int>a(3);
    cin>>a[0]>>a[1]>>a[2];
    sort(a.begin(),a.end());
    cout<<(a[0]^a[1]^a[2])-a[1]<<endl;
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
