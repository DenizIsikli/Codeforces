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
#include <bits/stdc++.h>

using namespace std;
using vi = std::vector<int>;

#define int long long

const int MAX_INT = 1e9;
const int MIN_INT = -1e9;

template<typename T>
void read_vector(std::vector<T> &vec) {
    for (T &val : vec) std::cin >> val;
}

void solve() {
    int n, k;
    cin >> n >> k;

    vector<vector<int>> a(k);
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        a[x%k].push_back(i);
    } 

    int res = -1;
    for (int i = 0; i < k; i++) {
        if ((int)a[i].size()==1) {
            res = a[i][0];
            break;
        }
    }

    if (res==-1) {
        cout << "NO\n";
    } else {
        cout << "YES\n" << res << "\n";
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

