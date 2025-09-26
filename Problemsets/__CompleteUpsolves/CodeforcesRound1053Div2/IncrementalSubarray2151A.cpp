#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;

int a[100010];
int n,m;
int ans;

void solve() {
    cin>>n>>m;
    for(int i=1;i<=m;i++)cin>>a[i];
    ans=n-a[m]+1;
    for(int i=2;i<=m;i++){if(a[i]==1)ans=1;}
    cout<<ans<<endl;
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

