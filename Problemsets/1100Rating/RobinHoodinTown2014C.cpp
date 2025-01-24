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
    
    int sum = 0;
    vector<int> a(n);
    for (auto &x : a) {
        cin >> x;
        sum += x;
    }

    sort(a.begin(), a.end());

    if (n < 3) {
        cout << "-1\n";
        return;
    }

    cout << max(0LL, a[n/2]*2*n-sum+1) << '\n';
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

