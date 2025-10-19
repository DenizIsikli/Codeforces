#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>pos;
    for(int i=0;i<n; i++)if(s[i]=='0')pos.push_back(i+1);
    cout<<(int)pos.size()<<'\n';
    for(auto&z:pos)cout<<z<<' ';
    cout<<'\n';
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

