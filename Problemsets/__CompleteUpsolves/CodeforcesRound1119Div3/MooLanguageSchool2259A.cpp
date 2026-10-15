#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n,k,ans=0;
    string s;
    cin>>n>>k>>s;
    for(int i=0;i<n;i+=k){
        if(s.substr(i,k).find('0')==string::npos) ans++;
    }
    cout<<ans<<'\n';
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
