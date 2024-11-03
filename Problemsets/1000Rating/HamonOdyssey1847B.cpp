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
    int n; cin >> n;
    vector<int> a(n);
    read_vector(a);

    int part = 1;
    int curr = a[0];

    for (int i = 0; i < a.size(); i++) {
        curr &= a[i];
        if (curr==0) {
            if (i==a.size()-1) break;
            part++;
            curr = a[i+1];
        }
    }
    if (curr!=0) part--;
    part = max(part, 1);
    cout << part << '\n';
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

