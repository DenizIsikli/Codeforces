#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n;
    string ans="aiueo";
    cin>>n;
    for(int i=0;i<5;++i){
        cout<<string(n/5+(n%5>i),ans[i]);
    }
    cout<<"\n";
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
