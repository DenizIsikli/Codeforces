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
    int n,s,dx,dy,x,y;
    cin>>n>>s;
    int ans=0;
    for (int i=0;i<n;i++){
        cin>>dx>>dy>>x>>y;
        if(dx==dy)ans+=(x==y);
        else ans+=(x+y==s);
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

