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

const int N = 1010;

int a[N];

void solve() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n); 
    int mx = 0;
    for (int i = 0; i < n; i+= 2) {
        if (max(mx, a[i]) != max(mx, a[i+1])) {
            cout << "NO\n";
            return;
        }
        mx = max(mx, a[i])+1;
    }
    cout << "YES\n";
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

