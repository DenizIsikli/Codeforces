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

    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        int h, m;
        std::cin >> h >> m;

        vii times;

        for (int i = 0; i < n; ++i) {
            int hh, mm;
            std::cin >> hh >> mm;

            int diff_h = (hh - h + 24) % 24;
            int diff_m = mm - m;

            if (diff_m < 0) {
                diff_m += 60;
                diff_h = (diff_h - 1 + 24) % 24;
            }
            times.emplace_back(diff_h, diff_m);
        }
        std::sort(times.begin(), times.end());
        std::cout << times[0].first << ' ' << times[0].second << '\n';
    }

    return 0;
}
