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
    int n, k;
    cin >> n >> k;
    if (k <= n) {
        cout << (k - 1) / 2 << '\n';
    } else {
        int mn = k - n, mx = n;
        cout << max(0LL, (mx - mn + 1) / 2) << '\n';
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}

