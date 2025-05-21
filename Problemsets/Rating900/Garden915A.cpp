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
    int mx = k;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (k%a==0) {
            mx = min(mx, k/a);
        }
    }

    cout << mx;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}

