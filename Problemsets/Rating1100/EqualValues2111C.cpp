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

int INT_MAX = 1e18;

void solve() {
    int n;
    cin>>n;
    int ans=INT_MAX;
    int l=0,v=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x!=v){
            v=x,l=i;
        }
        ans=min(ans,x*(n-(i-l+1)));
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

