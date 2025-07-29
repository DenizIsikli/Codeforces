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

int a[101];

void solve() {
    int n;
    cin >> n;

    for (int i = 0; i < n-2; i++) {
        cin >> a[i];
    }
    
    int size = n-2;
    int cnt_zero = 0;

    for (int i = 0; i < size-2; i++) {
        if (a[i]==1) {
            if (a[i+1]==0 && a[i+2]==1) {
                cout << "NO" << '\n';
                return;
            }
        }
    }
    cout << "YES" << '\n';
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

