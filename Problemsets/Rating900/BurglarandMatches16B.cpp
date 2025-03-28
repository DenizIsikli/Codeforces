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

int n, m, a, b, res, v[11];

void solve() {
    cin >> n >> m;
    while (m--) {
        cin >> a >> b;
        v[b] += a;
    }
    for (int i = 10; i >= 1; i--) {
        res += min(n, v[i]) * i;
        n -= min(n, v[i]);
    }
    cout << res << '\n';
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}

