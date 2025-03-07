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

int n, m;

void solve() {
    cin >> n >> m;
    multimap<int, vector<int>, greater<int>> mp;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        vector<int> v(m);
        for (int j = 0; j < m; j++) {
            cin >> v[j];
        }
        int sum = accumulate(v.begin(), v.end(), 0);
        mp.insert({sum, v});
    }
    
    vector<int> a;
    for (auto& it : mp) {
        for (int x : it.second) {
            a.push_back(x);
        }
    }

    vector<int> pref(n * m + 1, 0);
    for (int i = 1; i <= n * m; i++) {
        pref[i] = pref[i - 1] + a[i - 1];
    }

    int res = 0;
    for (int i = 1; i <= n*m; i++) {
        res += pref[i];
    }

    cout << res << '\n';
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

