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

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &x:a) cin>>x;

    vector<int> pre(n);
    vector<int> suf(n);

    if (a[0]>0) pre[0]=a[0];

    for (int i=1; i<n; i++) {
        pre[i]=pre[i-1];
        if (a[i]>0) {
            pre[i]+=a[i];
        }
    }

    if (a[n-1]<0) suf[n-1]=-a[n-1];

    for (int i=n-2; i>=0; i--) {
        suf[i] = suf[i+1];
        if (a[i]<0) {
            suf[i]-=a[i];
        }
    }
    
    int res = 0;
    for (int i = 0; i < n; i++) {
        res=max(res,pre[i]+suf[i]);
    }

    cout << res << endl;
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

