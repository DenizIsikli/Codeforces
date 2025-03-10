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
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    map<char, int> fq;
    for (int i = 0; i < s.size(); i++) fq[s[i]]++;
    int cnt = 0;
    for (auto &p : fq) {
        if (p.second&1) cnt++;
    }
    if (k+1>=cnt) cout << "YES\n";
    else cout << "NO\n";
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

