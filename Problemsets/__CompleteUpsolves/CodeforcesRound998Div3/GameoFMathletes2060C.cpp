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

int a[200005];
map<int, int> fq;


void solve() {
    int n, k;
    cin >> n >> k;
    
    fq.clear();

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        fq[a[i]]++;
    }

    int res = 0;
    for (int i = 1; i <= n; i++) {
        if (fq[k-a[i]] != 0) fq[k-a[i]]--, res++;
    }

    cout << res/2 << '\n';
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

