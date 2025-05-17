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
    string a, b;
    cin >> a >> b; 

    int ans = a.size() + b.size();

    for (int st = 0; st < b.size(); st++) {
        int ptr = st;
        for (int i = 0; i < a.size(); i++) {
            if (ptr < b.size() && a[i] == b[ptr]) ptr++;
        }
        ans = min(ans, (int)a.size()+(int)b.size()-ptr+st);
    }

    cout << ans << '\n';
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

