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
    vector<int>b(n);
    for(auto&x:b)cin>>x;
    bool f=1;
    int min_pref=b[0];
    for(auto&val:b){
        if(val>=min_pref*2){
            f=0;
            break;
        }
        min_pref=min(min_pref,val);
    }
    cout<<(f?"YES":"NO")<<endl;
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

