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
    int firstVal = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[i] = x;
    }

    for (int i = 0; i < n; i++) {
        if (a[i] < 0) { a[i] *= -1; }
    }

    firstVal = a[0];
    sort(a.begin(), a.end());
    bool valid = false;
    for (int i = 0; i < n; i++) {
        if (a[i] == firstVal) {
            if (i%2==0) { if (i <= n/2) valid = true; }
            else { if (i <= n/2 || i <= n/2-1) valid = true; }
        }
    }

    cout << (valid ? "YES" : "NO") << '\n';
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

