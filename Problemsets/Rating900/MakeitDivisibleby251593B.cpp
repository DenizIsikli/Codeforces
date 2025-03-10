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
    int x = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        for (int j = i+1; j < s.size(); j++) {
            if (((s[i]-'0')*10+(s[j]-'0'))%25==0) x=s.size()-i-2;
        }
    }
    cout << x << '\n';
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

