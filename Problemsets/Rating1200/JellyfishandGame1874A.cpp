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

int a[1005], b[1005];
int n=0, m=0, k=0, x=0, y=0;

void solve() {
    cin >> n >> m >> k;
    k--;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    x=y=0;
    for (int i = 1; i < n; i++) if (a[i]<a[x]) x=i;
    for (int i = 1; i < m; i++) if (b[i]>b[y]) y=i;
    if (b[y]>a[x]) swap(a[x], b[y]);
    if (k&1) {
        x=0, y=0;
        for (int i = 1; i < n; i++) if (a[i]>a[x]) x=i;
        for (int i = 1; i < m; i++) if (b[i]<b[y]) y=i;
        swap(a[x], b[y]);
    }
    int res = 0;
    for (int i = 0; i < n; i++) res += a[i];
    cout << res << '\n';
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

