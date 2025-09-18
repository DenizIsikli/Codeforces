#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;

void solve() {
    int n,m,x,y,s=0;
    cin>>n>>m>>x>>y;
    for(int i=0;i<n;i++)cin>>s;
    for(int i=0;i<m;i++)cin>>s;
    cout<<n+m<<endl;
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

