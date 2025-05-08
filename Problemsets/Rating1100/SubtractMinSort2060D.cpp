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

    int x = 0;
    for (int i = 1; i < n; i++) {
        if (a[i-1]>a[i]) x=i;
    }

    if (x==0) {
        cout << "YES\n";
        return;
    }

    for (int i = 0; i < x; i++) {
        int minN = min(a[i], a[i+1]);
        a[i] -= minN;
        a[i+1] -= minN;
    }

    cout << (is_sorted(a.begin(), a.end()) ? "YES" : "NO") << '\n';
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

