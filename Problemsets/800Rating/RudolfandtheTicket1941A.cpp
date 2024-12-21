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
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> b(n);
    vector<int> c(m);

    read_vector(b);
    read_vector(c);

    int res = 0;

    for (int i = 0; i < n; i++) {
        int temp = 0;
        for (int j = 0; j < m; j++) {
            if (b[i]+c[j]<=k) {
                res++;
            }
        }
    }
    cout << res << '\n';
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


