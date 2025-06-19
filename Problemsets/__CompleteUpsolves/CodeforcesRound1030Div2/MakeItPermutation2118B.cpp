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
    int n; cin>>n;
    cout<<2*n-1<<endl;
    for (int i=1;i<n;i++) {
        cout<<i<<" "<<1<<" "<<i<<endl;
        cout<<i<<" "<<i+1<<" "<<n<<endl;
    }
    cout<<n<<" 1 "<<n<<endl;
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

