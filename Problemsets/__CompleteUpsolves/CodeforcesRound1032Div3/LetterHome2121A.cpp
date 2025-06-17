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
    int n,s;
    cin>>n>>s;
    int mn=1e18,mx=-1e18;
    for (int i=0;i<n;i++) {
        int x;
        cin>>x;
        mn=min(mn,x);
        mx=max(mx,x);
    }
    if(mn==mx) {
        cout<<abs(mn-s)<<endl;
        return;
    }
    if(abs(mn-s)<=abs(mx-s)) {
        cout<<abs(mn-s)+abs(mx-mn)<<endl;
    } else {
        cout<<abs(mx-s)+abs(mx-mn)<<endl;
    }
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

