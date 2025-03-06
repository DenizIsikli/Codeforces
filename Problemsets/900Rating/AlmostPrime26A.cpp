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

void solve() {
    int n;
    cin >> n;
    n++;
    int ans = 0;
    while (n--) {
        int cnt = 0;
        int temp = n;
        for (int i = 2; i * i <= temp; i++) {
            if (temp % i == 0) {
                cnt++;
                while (temp % i == 0)temp /= i;
            }
        }
        if (temp > 1)cnt++;
        if (cnt == 2)ans++;
    }
    cout << ans;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}

