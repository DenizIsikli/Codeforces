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
    int a, b, c;
    cin >> a >> b >> c;

    int as=0, bs=0, cs=0;
    if (b&1&&c&1 || b%2==0&&c%2==0) {
        as = 1;
    }
    if (a&1&&c&1 || a%2==0&&c%2==0) {
        bs = 1;
    }
    if (a&1&&b&1 || a%2==0&&b%2==0) {
        cs = 1;
    }
    cout << as << ' ' << bs << ' ' << cs << '\n';
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

