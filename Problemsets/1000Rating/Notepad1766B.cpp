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
    string s;
    cin >> n >> s;
    int flag = 0;
    for (int i = 0; i < n-1; i++) {
        char k = s[i], k1 = s[i+1];
        for (int j = i+2; j < n-1; j++) {
            if (k==s[j]&&k1==s[j+1]) {
                flag = 1;
                break;
            }
        }
        if (flag) break;
    }
    cout << (flag ? "YES" : "NO") << '\n';
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

