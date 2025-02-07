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

const int N = 1e5;
int n, l, r, a[N], b[N];

void solve() {
    cin >> n >> l >> r;
    l--;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(a, a+r, greater<>());
    sort(b+l, b+n);
    cout << min(accumulate(a+l, a+r, 0LL), accumulate(b+l, b+r, 0LL)) << '\n';
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

