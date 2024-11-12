#include <charconv>
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

bool f(int idx, string &s)
{
	return 0<=idx&&idx+4<=s.size()&&s[idx]=='1'&&s[idx+1]=='1'&&s[idx+2]=='0'&&s[idx+3]=='0';
}

void solve() {
    string s; cin >> s;
    int cnt = 0;
    for (int i = 0; i+4 <= s.size(); i++) if (f(i, s)) cnt++;
    int q; cin >> q;

    for (;q--;) {
        int p, v; cin >> p >> v;
        p--;
        for (int i = p-3; i <= p; i++) cnt -= f(i, s);
        s[p] = v+'0';
        for (int i = p-3; i <= p; i++) cnt += f(i, s);
        cout << (cnt > 0 ? "YES\n" : "NO\n");
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

