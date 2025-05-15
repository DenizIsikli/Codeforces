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
    for (auto &x : a) {
        cin >> x;
    }

    int sum  = accumulate(a.begin(), a.end(), 0LL);
    if (sum%2==0) {
        cout << "Jerry\n";
        return;
    }

    sort(a.begin(), a.end());
    a[n-1]--;
    sort(a.begin(), a.end());
    if (a[n-1]-a[0] > k) {
        cout << "Jerry\n";
        return;
    }
    cout << "Tom\n";
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

