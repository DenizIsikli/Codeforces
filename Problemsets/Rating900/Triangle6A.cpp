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

int a[4], b;

void solve() {
    for (int &x : a) {
        cin >> x;
    }
    sort(a, a + 4);
    b = max(a[0]+a[1]-a[2], a[1]+a[2]-a[3]);
    cout << (b>0 ? "TRIANGLE" : b ? "IMPOSSIBLE" : "SEGMENT") << '\n';
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}

