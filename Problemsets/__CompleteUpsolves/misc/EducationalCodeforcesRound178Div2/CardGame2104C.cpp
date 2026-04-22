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
    cin >> n;
    string s;
    cin >> s;
    int b = 0;
    for (auto &c : s) {
        if (c == 'B') { b++; }
    }

    if (s[n-1] == 'B' && b > 1 || s[n-2] == 'B' && s[0] == 'B') {
        cout << "Bob\n";
    } else {
        cout << "Alice\n";
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

