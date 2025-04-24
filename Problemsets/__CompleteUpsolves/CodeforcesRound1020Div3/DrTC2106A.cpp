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

    int res = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i]=='0') s[i]='1';
        else s[i]='0';
        for (auto &c : s) {
            if (c == '1') res++;
        }
        if (s[i]=='0') s[i]='1';
        else s[i]='0';
    }
    cout << res << '\n';
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

