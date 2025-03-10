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
    int n, m, k;
    cin >> n >> m >> k;
    
    vector<int> a(m);
    vector<bool> known(n+1, false);

    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;
        known[x] = true;
    }

    string res = "";

    int knownCount = 0;
    for (int i = 1; i <= n; i++) {
        if (known[i]) {
            knownCount++;
        }
    }

    for (int i = 0; i < m; i++) {
        if (known[a[i]] == true) {
            if (knownCount == n) {
                res += "1";
            } else {
                res += "0";
            }
        } else {
            if (knownCount == n - 1) {
                res += "1";
            } else {
                res += "0";
            }
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

