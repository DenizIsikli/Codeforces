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
    vector<int> a(n), b(n+1);

    for (auto& x : a) cin >> x;
    for (auto& x : b) cin >> x;
    
    int sum = 0, ext = 1e18;
    for (int i = 0; i < n; ++i) {
      sum += abs(a[i] - b[i]);
      ext = min(ext, abs(a[i] - b[n]));
      ext = min(ext, abs(b[i] - b[n]));
      if (min(a[i], b[i]) <= b[n] && b[n] <= max(a[i], b[i]))
        ext = 0;
    }
    cout << sum + ext + 1 << '\n';}

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

