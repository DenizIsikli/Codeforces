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

// Common data types
using ll = long long;
using vi = std::vector<int>;
using vvi = std::vector<vi>;
using vl = std::vector<ll>;
using vvl = std::vector<vl>;
using vs = std::vector<std::string>;
using pii = std::pair<int, int>;
using pll = std::pair<ll, ll>;
using vii = std::vector<pii>;
using vll = std::vector<pll>;
using si = std::set<int>;
using mii = std::map<int, int>;
using umii = std::unordered_map<int, int>;
using usi = std::unordered_set<int>;

// Constants
const int INF = 1e9+7;
const ll LINF = 1e18;
const double EPS = 1e-9;
const double PI = acos(-1);

// Template functions
template<typename T>
void read_vector(std::vector<T> &vec) {
    for (T &val : vec) std::cin >> val;
}

template<typename T>
void print_vector_ws(const std::vector<T> &vec) {
    for (const T &val : vec) std::cout << val << ' ';
    std::cout << '\n';
}

template<typename T>
void print_vector(const std::vector<T> &vec) {
    for (const T &val : vec) std::cout << val;
    std::cout << '\n';
}

void solve() {
    int max_x = INT_MIN, min_x = INT_MAX, max_y = INT_MIN, min_y = INT_MAX;
    for (int i = 0; i < 4; ++i) {
        int x, y;
        cin >> x >> y;
        max_x = max(max_x, x);
        min_x = min(min_x, x);
    }
    cout << (ll) (max_x - min_x) * (max_x - min_x) << '\n';
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
