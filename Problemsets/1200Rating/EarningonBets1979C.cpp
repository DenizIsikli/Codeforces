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

using ll = long long;

const int MAX_INT = 1e9;
const int MIN_INT = -1e9;

template<typename T>
void read_vector(std::vector<T> &vec) {
    for (T &val : vec) std::cin >> val;
}

void solve() {
    int n;
    cin >> n;

    ll L = 232792560;

    vector<int> k(n), x(n);
    for (int i = 0; i < n; i++) {
        cin >> k[i];
        x[i] = L/k[i];
    }
    
    if(accumulate(x.begin(), x.end(), 0LL) < L) {
        for (int i = 0; i < n; i++) {
            cout << x[i] << " \n"[i==n-1];
        }
    } else {
        cout << -1 << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

