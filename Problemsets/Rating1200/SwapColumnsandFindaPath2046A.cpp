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

void solve() {
    int n;
    cin >> n;

    int a[5010];
    int b[5010];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int sum = 0, mx = -1e9;

    for (int i = 0; i < n; i++) {
        cin >> b[i];
        sum += max(a[i], b[i]);
        mx = max(mx, min(a[i], b[i]));
    }

    cout << sum + mx << '\n';
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

