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
    int a[n+10];
    cin >> a[0];
    bool x = a[0] % 2;
    string ans = "YES\n";
    for (int i = 1; i < n; i ++) {
        cin >> a[i];
        if (a[i] % 2 != x)
            ans = "NO\n";
    }
    cout << ans;
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

