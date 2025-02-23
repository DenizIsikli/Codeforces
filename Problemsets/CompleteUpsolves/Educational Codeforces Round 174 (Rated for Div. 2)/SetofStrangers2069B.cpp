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

int a[709][709];
int v[500010];
int res, sum;

void solve() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n*m; i++) {
        v[i]=0;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            v[a[i][j]]=1;
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i-1][j]==a[i][j] || a[i][j-1]==a[i][j]) {
                v[a[i][j]]=2;
            }
        }
    }

    res=0;
    sum=0;

    for (int i = 1; i <= n*m; i++) {
        res+=v[i];
        sum=max(sum, v[i]);
    }

    res-=sum;
    cout << res << '\n';
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

