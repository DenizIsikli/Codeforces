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
    bool f = false;
    int cnt[10] = {};
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
        if (cnt[0]>=3&&cnt[1]>=1&&cnt[2]>=2&&cnt[3]>=1&&cnt[5]>=1&&!f) {
            cout << i+1 << "\n";
            f = true;
        } 
    }
    if (!f) cout << 0 << '\n';
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

