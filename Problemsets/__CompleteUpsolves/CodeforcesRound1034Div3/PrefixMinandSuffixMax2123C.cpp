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

int INT_MAX = 1e18;

using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>a(n+1),pre(n+1,INT_MAX),suf(n+2);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        pre[i]=min(pre[i-1],a[i]);
    }
    for(int i=n;i>=1;i--){
        suf[i]=max(suf[i+1],a[i]);
    }
    for(int i=1;i<=n;i++){
        cout<<(a[i]==pre[i]||a[i]==suf[i]?1:0);
    }
    cout<<endl;
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

