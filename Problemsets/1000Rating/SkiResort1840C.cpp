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
    int n, k, q;
    cin >> n >> k >> q;

    vi a(n);
    read_vector(a);

    int res = 0;
    int cnt = 0;

    for (int i = 0; i < a.size(); i++) {
        if (a[i]<=q) {
            cnt++;
        } else {
            if (cnt>=k) {
                res+=(cnt-k+1)*(cnt-k+2)/2;
            }
            cnt = 0;
        }
    }

    if (cnt>=k) {
        res+=(cnt-k+1)*(cnt-k+2)/2;
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

