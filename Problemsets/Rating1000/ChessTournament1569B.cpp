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
    int n; cin >> n;
    string s; cin >> s;
    vector<int> a;
    for (int i = 0; i < n; ++i) if (s[i] == '2') a.push_back(i);
    int k = a.size();
    if (k==1 || k==2) {
        cout << "NO\n";
        return;
    }

    vector<string> t(n, string(n, '='));
    for (int i = 0; i < n; ++i) t[i][i] = 'X';
    for (int i = 0; i < k; ++i) {
        int x = a[i], y = a[(i+1)%k];
        t[x][y] = '+';
        t[y][x] = '-';
    }
    cout << "YES\n";
    for (int i = 0; i < n; ++i) cout << t[i] << '\n';
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

