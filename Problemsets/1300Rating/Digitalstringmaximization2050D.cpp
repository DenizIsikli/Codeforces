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
    
    int n = s.size();
    for (int i = 1; i < n;) {
        if (s[i] != '0' && s[i]>s[i-1]+1) {
            s[i]--;
            swap(s[i], s[i-1]);
            i = max(1ll, i-1);
        } else {
            i++;
        }
    }

    cout << s << '\n';
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
