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

void solve() {
    int n, x;
    cin >> n >> x;
    int firstOneIdx = -1, lastOneIdx = -1;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a==1) {
            if (firstOneIdx==-1) {
                firstOneIdx = i;
            } else {
                lastOneIdx = i;
            }
        }
    }
    cout << ((lastOneIdx-firstOneIdx+1) <= x ? "YES" : "NO") << endl;
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

