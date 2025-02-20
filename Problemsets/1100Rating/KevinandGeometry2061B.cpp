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
int b[200010];
int x, x_idx, sides_idx;

void solve() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    
    sort(a+1, a+n+1);
    x_idx = 0;

    for (int i = 1; i < n; i++) {
        if (a[i]==a[i+1]) {
            x = a[i];
            x_idx = i;
        }
    }

    if (x_idx==0) {
        cout << -1 << '\n';
        return;
    }

    sides_idx = 0;
    for (int i = 1; i <= n; i++) {
        if (i!=x_idx && i!=x_idx+1) {
            b[++sides_idx] = a[i];
        }
    }

    for (int i = 1; i < sides_idx; i++) {
        if (abs(b[i]-b[i+1])<2*x) {
            cout << x << ' ' << x << ' ' << b[i] << ' ' << b[i+1] << '\n';
            return;
        }
    }
    cout << -1 << '\n';
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

