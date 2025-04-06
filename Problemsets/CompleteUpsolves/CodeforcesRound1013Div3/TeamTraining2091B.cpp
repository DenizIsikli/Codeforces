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
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    int res = 0;
    for (auto &x : a) cin >> x;
    sort(a.begin(), a.end(), greater<int>());
    for (int i = 0, cnt = 1; i < n; i++, cnt++) {
        if (a[i]*cnt>=x) {
            res++;
            cnt = 0;
        }
    }
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

