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
    bool flag = false;
    if (s[0]=='1'||s[n-1]=='1') flag = true;
    for (int i = 1; i < n; i++) {
        if (s[i]=='1'&&s[i-1]=='1') {
            flag = true;
            break;
        }
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

