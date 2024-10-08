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

// Common data types
using ll = long long;
using vi = std::vector<int>;
using vvi = std::vector<vi>;
using vl = std::vector<ll>;
using vvl = std::vector<vl>;
using vs = std::vector<std::string>;
using pii = std::pair<int, int>;
using pll = std::pair<ll, ll>;
using vii = std::vector<pii>;
using vll = std::vector<pll>;
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
void print_vector(const std::vector<T> &vec) {
    for (const T &val : vec) std::cout << val << ' ';
    std::cout << '\n';
}

template<typename T>
void print_vector_ws(const std::vector<T> &vec) {
    for (const T &val : vec) std::cout << val;
    std::cout << '\n';
}

void solve() {
    int n; cin >> n;
    vi a(n);
    read_vector(a);

    int m; cin >> m;
    while (m--) {
        string s; cin >> s;
        if (s.size() != n) { cout << "NO" << '\n'; continue; }
        map<char, int> m1;
        map<int, char> m2;
        
        if (s.size() != n) { cout << "NO" << '\n'; continue; }

        bool t = true;
        for (int i = 0; i < n; ++i) {
            if (m1.find(s[i]) == m1.end() && m2.find(a[i]) == m2.end()) {
                m1[s[i]] = a[i];
                m2[a[i]] = s[i];
            } else if ((m1.find(s[i]) != m1.end() && m1[s[i]] != a[i]) || (m2.find(a[i]) != m2.end() && m2[a[i]] != s[i])) {
                t = false;
                break;
            }
        }
        cout << (t ? "YES" : "NO") << '\n';
    }
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

