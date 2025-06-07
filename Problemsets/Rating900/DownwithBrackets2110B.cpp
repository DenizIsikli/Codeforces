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
#define endl '\n'

using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    int cnt = 0 ;
    for (int i = 1; i < n-1; i++) {
        if (s[i] == '(') cnt++;
        else cnt--;
        if (cnt < 0) {
            cout << "YES" << endl;
            return;
        }
    }

    if (cnt == 0) { cout << "NO" << endl;}
    else { cout << "YES" << endl; }
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

