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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max_val = 0;
    int max_val_idx = 0;
    max_val = max(a[0], a[n - 1]);
    max_val_idx = (a[0] > a[n - 1] ? 0 : n - 1);

    for (int i = 2; i < n-2; i+=2) {
        if (a[i]>max_val) {
            max_val = a[i];
            max_val_idx = i;
        }
    }

    cout << max_val << '\n';
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

