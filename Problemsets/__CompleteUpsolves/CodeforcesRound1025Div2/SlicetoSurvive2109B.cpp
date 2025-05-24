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

int f(int n) {
    int cnt = 0;
    while (n>1) {
        cnt++;
        n=(n+1)/2;
    }
    return cnt;
}

void solve() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    cout << 1+min(min(f(a), f(n-a+1))+f(m), f(n)+min(f(b), f(m-b+1))) << '\n';
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

