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
    string s; cin >> s;

    string result = "";
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '.') {
            result += '0';
        } else if (s[i] == '-' && s[i + 1] == '.') {
            result += '1';
            ++i;
        } else if (s[i] == '-' && s[i + 1] == '-') {
            result += '2';
            ++i;
        }
    }
    cout << result << '\n';
}

int main() {
    FAST_IO;

    solve();

    return 0;
}

