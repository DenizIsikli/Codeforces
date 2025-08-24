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
    cin>>n;
    int t=10;
    vector<int>a;
    a.clear();
    for(int i=1;i<=17;i++){
        if(n%(t+1)==0)a.push_back(n/(t+1));
        t*=10;
    }
    cout<<a.size()<<endl;
    sort(a.begin(),a.end());
    for(auto&x:a)cout<<x<<" ";
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

