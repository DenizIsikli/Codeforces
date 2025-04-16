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
    vector<int> a(2*n+5, 0);
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin>>a[i+j+1];
            mp[a[i+j+1]] = 1;
        }
    }

    for (int i = 1; i <= 2*n; i++) {
        if (mp[i]==0) a[0] = i;
    }

    for (int i = 0; i < 2*n; i++) {
        cout << a[i] << ' ';
    }
    cout << '\n';
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

