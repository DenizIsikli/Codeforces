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
    int n, k;
    string s;
    cin >> n >> k >> s;
    int x=0, y=0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') x++;
        else y++;
    }

    int h=n/2, p=h-k;
    if (x>=p&&y>=p&&(x-p)%2==0) cout << "YES\n";
    else cout << "NO\n";
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

