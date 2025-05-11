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
    string s1, s2;
    cin >> s1 >> s2;
    int ans = 0;
    for (int i = 1; i < n-1; i++) {
        bool ok = true;
        ok &= (s1[i] == '.' && s2[i] == '.');
        ok &= (s1[i-1] != s2[i-1]);
        ok &= (s1[i+1] != s2[i+1]);
        ok &= (s1[i-1] == s1[i+1]);
        ans += ok;
    }
    cout << ans << '\n';
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

