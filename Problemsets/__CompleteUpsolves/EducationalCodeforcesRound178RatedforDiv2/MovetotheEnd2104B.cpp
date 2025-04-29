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

    vector<int> pmax(n+1);
    vector<int> psum(n+1);

    for (int i = 0; i < n; i++) {
        pmax[i+1] = max(pmax[i], a[i]);
        psum[i+1] = psum[i] + a[i];
    }

    for (int k = 1; k <= n; k++) {
        cout << pmax[n-k+1]+psum[n]-psum[n-k+1] << ' ';
    }
    cout << '\n';
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

