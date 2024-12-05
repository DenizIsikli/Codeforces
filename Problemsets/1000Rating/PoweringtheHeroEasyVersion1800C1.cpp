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
    ll n;
    cin >> n;
    vector<ll> a(n);
    read_vector(a);
    ll res = 0;

    priority_queue<ll> power;
    for (ll i = 0; i < a.size(); i++) {
        if (a[i]!=0) {
            power.push(a[i]);
        } else if (a[i]==0 && !power.empty()) {
            res += power.top();
            power.pop();
        } else {
            continue;
        }
    }

    cout << res << '\n';
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

