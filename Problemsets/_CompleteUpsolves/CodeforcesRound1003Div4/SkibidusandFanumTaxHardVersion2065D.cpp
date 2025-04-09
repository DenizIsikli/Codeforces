#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <cmath>
#include <unordered_map>
#include <unordered_set>
#include <numeric>
#include <functional>

#define int long long

using namespace std;

int a[200010];
int b[200010];

void solve() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) { cin >> a[i]; }
    for (int i = 1; i <= m; i++) { cin >> b[i]; }

    sort(b+1, b+1+m);

    a[1] = min(a[1], b[1]-a[1]);
    for (int i = 2; i <= n; i++) {
        int j = lower_bound(b+1, b+1+m, a[i-1]+a[i])-b;
        if (j<=m&&b[j]-a[i]>=a[i-1]) {
            if (a[i]<a[i-1]) {
                a[i]=b[j]-a[i];
            } else {
                a[i]=min(a[i], b[j]-a[i]);
            }
        }
        if (a[i]<a[i-1]) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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

