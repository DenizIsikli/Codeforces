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

        int odd = 0, even = 0;

        std::string s;
        std::cin >> s;

        if (s.size() == 1) {
            if (s[0]-'0'&1) {
                std::cout << "1\n";
            } else {
                std::cout << "2\n";
            }
        } else {
            for (int i = 0; i < n; ++i) {
                if (i%2==0) {
                    if ((s[i]-'0')&1) {
                        odd = 1;
                    }
                } else {
                    if (!((s[i]-'0')&1)) {
                        even = 1;
                    }
                }
            }

            if (n&1) {
                std::cout << (odd ? "1\n" : "2\n");
            } else {
                std::cout << (even ? "2\n" : "1\n");
            }
        }
    }

    return 0;
}
