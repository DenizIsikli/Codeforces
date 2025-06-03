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

int mod = 998244353;
int a[100005], b[100005], pw[100005];

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    for (int i=0,x=0,y=0; i<n; i++) {
        if (a[i]>a[x]) x=i;
        if (b[i]>b[y]) y=i;
        if (a[x]>b[y] || a[x]==b[y]&&b[i-x]>a[i-y]) {
            cout << (pw[a[x]]+pw[b[i-x]])%mod << ' ';
        } else {
            cout << (pw[a[i-y]]+pw[b[y]])%mod << ' ';
        }
    }
    cout << endl;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    std::cin >> t;

    pw[0] = 1;
    for (int i = 1; i < 100005; i++) pw[i] = (pw[i-1]*2)%mod;
    while (t--) {
        solve();
    }

    return 0;
}

