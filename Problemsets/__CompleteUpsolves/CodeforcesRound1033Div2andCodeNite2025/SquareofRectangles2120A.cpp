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
    int l1,b1,l2,b2,l3,b3;
    cin>>l1>>b1>>l2>>b2>>l3>>b3;
    if(l1+l2+l3 == b1 && b1==b2 && b2==b3) cout<<"YES\n";
    else if(l2+l3 == l1 && b2==b3 && b1+b2==l1) cout<<"YES\n";
    else if(b1+b2+b3 == l1 && l1==l2 && l2==l3) cout<<"YES\n";
    else if(b2+b3 == b1 && l2==l3 && l1+l2==b1) cout<<"YES\n";
    else cout<<"NO\n";
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

