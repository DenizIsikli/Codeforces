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
    int n, d;
    cin >> n >> d;

    cout << 1;
    if (n>=3||d%3==0) cout << " 3";
    if (d==5) cout << " 5";
    if (d==7||n>=3) cout << " 7";
    if (d==9||(n>=3&&d%3==0)||n>=6) cout << " 9";
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

