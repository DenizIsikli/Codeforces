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
    int r, c; cin >> r >> c;
    vector<string> cake(r);
    for (int i = 0; i < r; ++i) {
        cin >> cake[i];
    }

    std::vector<std::pair<int, int>> coords;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (cake[i][j] == 'S') {
                coords.push_back({i, j});
            }
        }
    }

    set<int> rows;
    set<int> cols;
    for (auto [i, j] : coords) {
        rows.insert(i);
        cols.insert(j);
    }

    int ans = r * c - rows.size() * cols.size();
    cout << ans << '\n';
}

int main() {
    FAST_IO;

    solve();

    return 0;
}

