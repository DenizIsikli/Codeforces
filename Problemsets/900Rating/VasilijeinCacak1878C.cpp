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
using vl = std::vector<ll>;
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
        ll n, k, x;
        std::cin >> n >> k >> x;
        ll min_sum = 0;
        ll max_sum = 0;

        min_sum = k*(k+1)/2;
        max_sum = (n*(n+1)-(n-k)*(n-k+1))/2;

        if (min_sum <= x && x <= max_sum) std::cout << "YES\n";
        else std::cout << "NO\n";
    }

    return 0;
}
