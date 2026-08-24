#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    string s;cin>>s;
    s.erase(s.find('0'),1);
    s.erase(s.find('1'),1);
    cout<<s<<endl;
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
