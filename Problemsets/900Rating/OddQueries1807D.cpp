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

// Macros and optimizations
#pragma GCC optimize ("O3")
#define FAST_IO std::ios::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);

using ll = long long;

const int MAX_INT = 1e9;
const int MIN_INT = -1e9;

// Template functions
template<typename T>
void read_vector(std::vector<T> &vec) {
    for (T &val : vec) std::cin >> val;
}

int a[200100];

void solve() {
    int n, q; cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        int q; cin >> q;
        a[i] = a[i-1]+q;
    }
    for (int i = 1; i <= q; i++) {
        int l, r, k; cin >> l >> r >> k;
        ll res = (r-l+1)*k+a[l-1]+a[n]-a[r];
        if (res%2!=0) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main() {
    FAST_IO;

    int t;
    std::cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
