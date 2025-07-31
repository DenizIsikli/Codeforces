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
    int n,c;
    cin>>n>>c;
    vector<int>a(n);
    for(auto&x:a)cin>>x;
    sort(a.rbegin(),a.rend());
    int sv=0;
    for(auto&x:a){
        if(x*(1<<sv)<=c)sv++;
    }
    cout<<n-sv<<endl;
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

