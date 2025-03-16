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

int a[100001];

void solve() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a+n);
    
    int flag=1, tmp=0;
    for (int i = 1; i < n; i++) {
        if (a[i]%a[0]!=0) {
            if (tmp==0) {
                tmp=a[i];
            } else {
                if (a[i]%tmp!=0) {
                    flag=0;
                    break;
                }
            }
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

