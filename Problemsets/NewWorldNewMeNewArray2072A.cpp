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

int a[55];

void solve() {
    int n, k, p;
    cin >> n >> k >> p;

    if (k==0) {
        cout << 0 << '\n';
        return;
    }

    if (n*p<abs(k)) {
        cout << -1 << '\n';
    } else {
        int mult = 1;
        while (p*mult<abs(k)) {
            mult++;
        }
        cout << mult << '\n';
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

