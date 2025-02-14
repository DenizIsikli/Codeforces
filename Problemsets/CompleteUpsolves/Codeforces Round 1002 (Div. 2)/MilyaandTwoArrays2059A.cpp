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

int a[55], b[55];

void solve() {
    int n;
    cin >> n;
    set<int> sa, sb;
    for (int i = 0; i < n; i++) cin >> a[i], sa.insert(a[i]);
    for (int i = 0; i < n; i++) cin >> b[i], sb.insert(b[i]);
    if (sa.size()+sb.size()<4) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
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

