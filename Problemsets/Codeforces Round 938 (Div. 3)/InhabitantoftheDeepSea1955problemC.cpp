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

// Constants
const int INF = 1e9+7;
const long long LINF = 1e18;
const double EPS = 1e-9;
const double PI = acos(-1);

// Shortcuts for common data types
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

// Template functions
template<typename T>
void read_vector(std::vector<T> &vec) {
    for (T &val : vec) std::cin >> val;
}

template<typename T>
void print_vector(const std::vector<T> &vec) {
    for (const T &val : vec) std::cout << val << ' ';
    std::cout << '\n';
}

int main() {
    FAST_IO;

    int n;
    std::cin >> n;

    while (n--) {
        int s, k;
        std::cin >> s >> k;
        vi boats(s);
        read_vector(boats);
        int sunken_boats = 0;
        int front = 0, back = s - 1;

        while (k > 0 && front <= back) {
            if (k % 2 == 1) {
                if (boats[front] > 0) {
                    boats[front]--;
                }
                if (boats[front] == 0) {
                    sunken_boats++;
                    front++;
                }
            } else {
                if (boats[back] > 0) {
                    boats[back]--;
                }
                if (boats[back] == 0) {
                    sunken_boats++;
                    back--;
                }
            }
            k--;
        }


        std::cout << sunken_boats << '\n';
    }

    return 0;
}
