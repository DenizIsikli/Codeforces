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
    string s;
    cin >> s;

    bool positive = false;
    int leading = 0;
    for (int i = s.size()-1; i >= 0; i--) {
        if (s[i]!='0') {
            positive = true;
        } else if (positive) {
            leading++;
        }
    }
    cout << s.size()-(leading+1) << '\n';
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

