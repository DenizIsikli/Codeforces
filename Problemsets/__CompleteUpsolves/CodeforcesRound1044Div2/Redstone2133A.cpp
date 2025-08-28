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
    vector<int>a(n);
    set<int>s;
    for(auto&x:a)cin>>x;
    for(auto&x:a){
        if(s.count(x)){
            cout<<"YES"<<endl;
            return;
        }
        s.insert(x);
    }
    cout<<"NO"<<endl;
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

