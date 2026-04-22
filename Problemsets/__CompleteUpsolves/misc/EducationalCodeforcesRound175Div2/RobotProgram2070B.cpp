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

int n, x, k;
string s;

void solve() {
    cin >> n >> x >> k;
    cin >> s;
    int cnt = 0;

    for (int i=0; i<n&&i<k; i++) {
        cnt++;
        if (s[i]=='L') x--;
        else x++;
        if (x==0) break;
    }

    if (x!=0) {
        cout << 0 << '\n';
        return;
    }

    k-=cnt;
    cnt=0;
    for (int i=0; i<n; i++) {
        cnt++;
        if (s[i]=='L') x--;
        else x++;
        if (x==0) break;
    }

    if (x!=0) {
        cout << 1 << '\n';
        return;
    }
        
    cout << k/cnt+1 << '\n';
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

