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
    
    string s1, s2;
    cin >> s1 >> s2;

    int cnt1=0, cnt2=0;
    for (int i = 0; i < n; ++i) {
        if (i&1) {
            cnt2 += (s1[i]=='0');
            cnt1 += (s2[i]=='0');
        } else {
            cnt1 += (s1[i]=='0');
            cnt2 += (s2[i]=='0');
        }
    }
    
    cout << (cnt1>=(n+1)/2 && cnt2>=n/2 ? "YES" : "NO") << '\n';
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

