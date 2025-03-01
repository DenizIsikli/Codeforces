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
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    
    a[0] = INT_MIN;
    cin >> m;

    for (int i = 1; i <= n; i++) {
        if (min(a[i], m-a[i]) >= a[i-1]) a[i] = min(a[i], m-a[i]);
        else a[i] = max(a[i], m-a[i]);
        if (a[i]<a[i-1]) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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
