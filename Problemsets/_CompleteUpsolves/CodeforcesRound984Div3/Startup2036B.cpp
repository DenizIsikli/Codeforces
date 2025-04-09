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
    int n, k; cin >> n >> k;
    ll sum = 0;

    std::vector<int> a(k, 0);
    for (int i = 0; i < k; i++) {
        int b, c; cin >> b >> c;
        a[b-1] += c;
    }

    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    for (int i = 0; i < min(n, k); i++) {
        sum += a[i];
    }
    
    cout << sum << '\n';
}

int main() {
    FAST_IO;

    int t;
    std::cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

