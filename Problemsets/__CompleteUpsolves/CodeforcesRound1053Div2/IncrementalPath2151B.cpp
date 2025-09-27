#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;

void solve() {
    int n,m;
    string s;
    cin>>n>>m>>s;
    set<int>bl;
    for(int i=0;i<m;i++){
        int x;cin>>x;
        bl.insert(x);
    }
    int cur=1;
    for(char&c:s){
        cur++;
        if(c=='B'){while(bl.count(cur))cur++;}
        bl.insert(cur);
        if(c=='B'){while(bl.count(cur))cur++;}
    }
    cout<<bl.size()<<endl;
    for(auto&x:bl)cout<<x<<" ";
    cout<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

