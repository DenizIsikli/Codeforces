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

void solve() {
    int n;
    cin >> n;
    int sum = 0, mn = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        mn = min(mn, sum);
    }
    cout << sum-2*mn << '\n';
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

