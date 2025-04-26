#include <concurrencysal.h>
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
    long long res = 0, cnt = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        res += a[i];
        cnt += (a[i]&1);
    }

    if (!cnt || cnt == n) { cout << *max_element(a.begin(), a.end()) << '\n'; return; }
    else { cout << res-cnt+1 << '\n'; return; }
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

