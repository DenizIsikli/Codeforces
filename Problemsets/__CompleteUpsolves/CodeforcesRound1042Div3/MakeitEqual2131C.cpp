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
    int n,k;
    cin>>n>>k;
    multiset<int>ms[2];
    for(int j=0;j<2;j++){
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            ms[j].insert(min(x%k,k-x%k));
        }
    }
    cout<<(ms[0]==ms[1]?"YES":"NO")<<endl;
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

