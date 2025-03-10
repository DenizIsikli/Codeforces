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

void solve() {
    int n; cin >> n;
    vector<vector<int>> a(n, vector<int>(n));

    int l = 1, r = n*n, t = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (t) a[i][j] = l++;
            else a[i][j] = r--;
            t ^= 1;
        }
        if (i&1) reverse(a[i].begin(), a[i].end());
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) cout << a[i][j] << " \n"[j == n-1];
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

