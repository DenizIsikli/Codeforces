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

#define int long long

using namespace std;
using vi = std::vector<int>;

const int MAX_INT = 1e9;
const int MIN_INT = -1e9;

template<typename T>
void read_vector(std::vector<T> &vec) {
    for (T &val : vec) std::cin >> val;
}

void solve() {
    int n, x, y;
    cin >> n >> x >> y;

    vi a(n);
    int sum_a = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum_a += a[i];
    }

    sort(a.begin(), a.end());
    int res = 0;    

    for (int i = 0; i < n; i++) {
        res+=upper_bound(a.begin()+i+1, a.end(), sum_a-a[i]-x)-lower_bound(a.begin()+i+1, a.end(), sum_a-a[i]-y);
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

