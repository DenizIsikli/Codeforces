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
using vi = std::vector<int>;

#define int long long

const int MAX_INT = 1e9;
const int MIN_INT = -1e9;

template<typename T>
void read_vector(std::vector<T> &vec) {
    for (T &val : vec) std::cin >> val;
}

void solve() {
    string s;
    cin >> s;
    int sum_s = 0, twos = 0, threes = 0;
    for (char c : s) {
        int digit = c - '0';
        sum_s += digit;
        if (digit == 2) twos++;
        if (digit == 3) threes++;
    }

    for (int i = 0; i <= min(10LL, twos); i++) {
        for (int j = 0; j <= min(10LL, threes); j++) {
            if ((sum_s + i * 2 + j * 6) % 9 == 0) {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

