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
    int n,a,b;
    cin>>n>>a>>b;
    if((n%2)!=(b%2))cout<<"NO"<<endl;
    else{
        if(b>a)cout<<"YES"<<endl;
        else {
            if((n&1)==(a&1))cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
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

