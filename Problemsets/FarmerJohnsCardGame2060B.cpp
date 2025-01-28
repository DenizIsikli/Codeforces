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

const int maxN = 2005;
int a[maxN];


void solve() {
    int n, m;
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            int x;
            cin >> x;
            a[x] = i;
        }
    }

    for (int i = 0; i < n*m; i++) {
        if (a[i] != a[i+n] && i+n < n*m) {
            cout << -1 << '\n';
            return;
        }
    }

    for(int i=0;i<n;i++) cout<<a[i]<<(i<n-1?" ":"\n");
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

