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
void print_vector_ws(const std::vector<T> &vec) {
    for (const T &val : vec) std::cout << val << ' ';
    std::cout << '\n';
}

template<typename T>
void print_vector(const std::vector<T> &vec) {
    for (const T &val : vec) std::cout << val;
    std::cout << '\n';
}

bool good(vector<int>&b){
    int g = __gcd(b[0], b[1]);
    for(int i = 1; i < int(b.size()) - 1; i++){
        int cur_gcd = __gcd(b[i], b[i + 1]);
        if(g > cur_gcd) return false;
        g = cur_gcd;
    }
    return true;
}

bool solve(){
    int n;
    std::cin >> n;
    vi a(n);
    read_vector(a);
 
    int g = -1;
    int to_del = -1;
    for(int i = 0; i < n - 1; i++){
        int cur_gcd = std::__gcd(a[i], a[i + 1]);
        if(cur_gcd < g){
            to_del = i;
            break;
        }
        g = cur_gcd;
    }
    if(to_del == -1) return true;
    std::vector<int>b0 = a, b1 = a, b2 = a;
    if(to_del > 0) b0.erase(b0.begin() + to_del - 1);
    b1.erase(b1.begin() + to_del);
    if(to_del < n - 1) b2.erase(b2.begin() + to_del + 1);
    return good(b0) || good(b1) || good(b2);
}

int main() {
    FAST_IO;

    int t;
    std::cin >> t;

    while(t--){
        cout << (solve() ? "YES" : "NO") << "\n";
    }

    return 0;
}
