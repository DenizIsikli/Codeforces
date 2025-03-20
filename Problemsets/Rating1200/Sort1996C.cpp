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
    int n, q;
    cin >> n >> q;

    vector<vector<int>> pre1(n + 1, vector<int>(26, 0));
    vector<vector<int>> pre2(n + 1, vector<int>(26, 0));

    for (int i = 1; i <= n; i++) {
        char c;
        cin >> c;
        pre1[i]=pre1[i-1];
        pre1[i][c-'a']++;
    }

    for (int i = 1; i <= n; i++) {
        char c;
        cin >> c;
        pre2[i]=pre2[i-1];
        pre2[i][c-'a']++;
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        int dif = 0;
        for (int c = 0; c < 26; c++) {
            int v1 = pre1[r][c] - pre1[l-1][c];
            int v2 = pre2[r][c] - pre2[l-1][c];

            dif += abs(v1 - v2);
        }
        cout << dif/2 << '\n';
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

