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

    vii ratings(t);
    for (int i = 0; i < t; ++i) {
        std::cin >> ratings[i].first >> ratings[i].second;
    }

    bool isRated = false;
    bool isUnrated = false;

    for (int i = 0; i < t; ++i) {
        if (ratings[i].first != ratings[i].second) {
            isRated = true;
            break;
        }
    }

    if (!isRated) {
        for (int i = 1; i < t; ++i) {
            if (ratings[i].first > ratings[i - 1].first) {
                isUnrated = true;
                break;
            }
        }
    }

    if (isRated) {
        std::cout << "rated" << '\n';
    } else if (isUnrated) {
        std::cout << "unrated" << '\n';
    } else {
        std::cout << "maybe" << '\n';
    }

    return 0;
}
