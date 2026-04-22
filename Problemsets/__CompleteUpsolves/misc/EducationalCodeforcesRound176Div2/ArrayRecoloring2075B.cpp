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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &x : a) cin >> x;

    long long sumK = 0;

    if (k>1) {
        sort(a.begin(), a.end(), greater<int>());
        sumK = accumulate(a.begin(), a.begin() + (k+1), 0LL);
    } else {
        int l = *max_element(a.begin(), a.end()-1);
        int r = *max_element(a.begin()+1, a.end());
        sumK = max(l+a.back(), r+a.front());
    }
    cout << sumK << '\n';
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

