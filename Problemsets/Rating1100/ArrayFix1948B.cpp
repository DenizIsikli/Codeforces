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
    int prev, curr=0, flag=1;
    for (int i = 0; i < n; i++) {
        prev=curr;
        cin>>curr;
        if (curr>10&&curr/10>=prev&&curr/10<=curr%10) {
            curr%=10;
        }
        if (curr<prev) {
            flag=0;
        }
    }
    cout << (flag ? "YES" : "NO") << '\n';
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

