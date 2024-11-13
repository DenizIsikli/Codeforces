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


int main() {
    FAST_IO;

    int s, n; cin >> s >> n;
    std::vector<std::pair<int, int>> dragons(n);
    for (int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        dragons[i] = {x, y};
    }

    std::sort(dragons.begin(), dragons.end());
    for (auto [x, y] : dragons) {
        if (s > x) {
            s += y;
        } else {
            std::cout << "NO\n";
            return 0;
        }
    }
    std::cout << "YES\n";

    return 0;
}

