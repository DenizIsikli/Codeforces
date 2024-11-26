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
    int n, r, b; cin >> n >> r >> b;
    int p = r/(b+1), q=r%(b+1);
    for (int i = 0; i < q; i++) cout << string(p+1, 'R') << 'B';
    for (int i = q; i < b; i++) cout << string(p, 'R') << 'B';
    cout << string(p, 'R');
    cout << '\n';

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

