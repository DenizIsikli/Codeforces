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
    int n, m, k;
    string s;
    cin >> n >> m >> k >> s;

    int res = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i]=='1') cnt=0;
        else cnt++;
        if (cnt==m) cnt=0, res++, i+=k-1; 
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

