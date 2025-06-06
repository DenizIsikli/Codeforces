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
#define endl '\n'

using namespace std;

#define INT_MAX 9223372036854775807

void solve() {
    int n, d, k;
    cin >> n >> d >> k;
    vector<int> ss(n + 2, 0), es(n + 2, 0);

    for (int i = 0; i < k; i++) {
        int l, r;

        cin >> l >> r;
        ss[l]++;
        es[r]++;
    }

    for (int i = 1; i <= n; i++) ss[i] += ss[i - 1];
    for (int i = 1; i <= n; i++) es[i] += es[i - 1];

    int maxOverlap = -1, minOverlap = INT_MAX;
    int bestMaxIdx = 1, bestMinIdx = 1;


    for (int i = d; i <= n; i++) {
        int cur = ss[i] - es[i - d];
        if (cur > maxOverlap) {
            maxOverlap = cur;
            bestMaxIdx = i - d + 1;
        }
        if (cur < minOverlap) {

            minOverlap = cur;
            bestMinIdx = i - d + 1;
        }
    }

    cout << bestMaxIdx << " " << bestMinIdx << endl;
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

