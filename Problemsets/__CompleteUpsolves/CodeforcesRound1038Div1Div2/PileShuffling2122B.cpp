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
    int ans=0;
    int a1,a2,a3,a4;
    for(int i=1;i<=n;i++){
        cin>>a1>>a2>>a3>>a4;
        if(a2>a4)ans+=a1+a2-a4;
        else ans+=a1-min(a1,a3);
    }
    cout<<ans<<endl;
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

