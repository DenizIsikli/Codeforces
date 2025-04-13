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
    int x, k;
    cin >> x >> k;

    auto isPrime = [](int n) -> bool {
        if (n < 2) return false;
        for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) return false;
        }
        return true;
    };

    if (x>1&&k>1) {
        cout << "NO" << endl;
        return;
    } else if (k==1) {
        isPrime(x) ? cout << "YES\n" : cout << "NO\n";
    } else {
        cout << ((k==2) ? "YES\n" : "NO\n");
    }
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

