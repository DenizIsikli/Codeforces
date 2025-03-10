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

// Macros and optimizations
#pragma GCC optimize ("O3")
#define FAST_IO std::ios::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);

// Common data types
using ll = long long;
using vi = std::vector<int>;
using vvi = std::vector<vi>;
using vl = std::vector<long long>;
using vvl = std::vector<vl>;
using vs = std::vector<std::string>;
using pii = std::pair<int, int>;
using vii = std::vector<pii>;
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
}

int main() {
    FAST_IO;

    int n;
    std::cin >> n;
    vi heights(n);

    for (int i = 0; i < n; ++i) std::cin >> heights[i];

    int min = INT_MAX, minPos = 0;
    int max = 0, maxPos = 0;

    for (int i = 0; i < n; ++i) {
        heights[i] > max ? max = heights[i], maxPos = i : max;
        heights[i] <= min ? min = heights[i], minPos = i : min;
    }

    int ans;
    if(maxPos > minPos) {
        ans = maxPos + (n - 1 - minPos) - 1;
    } else {
        ans = maxPos + (n - 1 - minPos);
    }
    std::cout << ans << '\n';

    return 0;
}
