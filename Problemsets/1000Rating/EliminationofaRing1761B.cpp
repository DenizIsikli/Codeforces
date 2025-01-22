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

    unordered_map<int, int> fq;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        fq[x]++;
    }

    if(fq.size()==2) {
        cout << n/2+1 << '\n';
        return;
    }

    cout << n << '\n';
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

