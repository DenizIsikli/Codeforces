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
        int n, m, k;
        std::cin >> n >> m >> k;
        std::set<int> a, b, ans;

        for (int i = 0; i < n; ++i) {
            int x;
            std::cin >> x;
            a.insert(x);
        }
        for (int i = 0; i < m; ++i) {
            int x;
            std::cin >> x;
            b.insert(x);
        }

        int count1 = 0, count2 = 0;
        for (auto num : a) {
            if (num <= k) {
                ans.insert(num);
                count1++;
            }
        }
        for (auto num : b) {
            if (num <= k) {
                ans.insert(num);
                count2++;
            }
        }

        if (ans.size() == k && count1 >= k/2 && count2 >= k/2) std::cout << "YES" << '\n';
        else std::cout << "NO" << '\n';
    }

    return 0;
}
