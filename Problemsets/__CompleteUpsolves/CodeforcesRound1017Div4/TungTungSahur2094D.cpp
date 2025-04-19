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
    string a, b; cin >> a >> b;
    int n = a.size();
    int m = b.size();
    if (m<n||n*2<m||a[0]!=b[0]) {
        cout << "NO\n";
        return;
    }

    vector<int> aa, bb;
    int cnt = 1;
    for (int i = 0; i < n; i++) {
        if (a[i]!=a[i-1]) {
            aa.push_back(cnt);
            cnt = 1;
        }
        else cnt++;
    }
    aa.push_back(cnt);
    cnt = 1;
    for (int i = 0; i < m; i++) {
        if (b[i]!=b[i-1]) {
            bb.push_back(cnt);
            cnt = 1;
        }
        else cnt++;
    }
    bb.push_back(cnt);

    if (aa.size()!=bb.size()) {
        cout << "NO\n";
        return;
    }
    for (int i = 0; i < aa.size(); i++) {
        if (aa[i]>bb[i]||aa[i]*2<bb[i]) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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

