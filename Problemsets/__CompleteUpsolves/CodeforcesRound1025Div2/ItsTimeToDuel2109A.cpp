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
    for (auto &x : a) cin >> x;

    int cntOne = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            cntOne++;
        }
    }

    if (cntOne == a.size()) {
        cout << "YES" << '\n';
        return;
    }

    for (int i = 1; i < n; i++) {
        if (a[i] == 0 && a[i - 1] == 0) {
            cout << "YES" << '\n';
            return;
        }
    }
    cout << "NO" << '\n';
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

