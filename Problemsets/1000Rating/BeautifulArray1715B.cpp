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
    int n, k, b, s;
    cin >> n >> k >> b >> s;
    vector<int> a(n);
    a[0] = k*b;
    s-=k*b;

    if (s<0) {
        cout << -1 << '\n';
        return;
    } else {
        for (int i = 0; i < n; ++i) {
            int cur = min(s, k-1);
            a[i] += cur;
            s -= cur;
        }
        if (s>0) {
            cout << -1 << '\n';
        } else {
            for (int i = 0; i < n; ++i) {
                cout << a[i] << ' ';
            }
            cout << '\n';
        }
    }
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

