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
#define all(x) begin(x),end(x)

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> a(n);

    for (int i = 0; i < n; i++) cin >> a[i].second;
    for (int i = 0; i < n; i++) cin >> a[i].first;

    sort(all(a));
    int sum = k;

    for (int i = 0; i < n; i++) {
        while (sum < a[i].second) {
            k -= a[i].first;
            sum += k;
            if (k <= 0) { cout << "NO\n"; return; }
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

