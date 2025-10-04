#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;

void solve() {
    int x,y;
    cin>>x>>y;
    if(x==y||x==y+1||y==1)cout<<-1<<endl;
    else if(x<y)cout<<2<<endl;
    else cout<<3<<endl;
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
