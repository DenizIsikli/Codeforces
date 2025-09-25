#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    set<int>s(a.begin(),a.end());
    s.erase(-1);
    if(s.size()<=1&&!s.count(0))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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

