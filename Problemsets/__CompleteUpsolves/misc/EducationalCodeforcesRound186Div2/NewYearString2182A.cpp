#include <bits/stdc++.h>
#define int long long

#define endl '\n'
using namespace std;

void solve(){
    int n;
    string s;
    cin>>n>>s;
    if(s.find("2026")!=string::npos){cout<<0<<endl;return;}
    if(s.find("2025")!=string::npos){cout<<1<<endl;return;}
    cout<<0<<endl;
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
