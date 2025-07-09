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
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    int ans=2e9;
    if((a^1)==b)ans=y;
    int cur=0;
    while(a<b){
        if((a^1)==a+1)a++,cur+=min(x,y);
        else a++,cur+=x;
    }
    if(a==b)ans=min(ans,cur);
    if(ans==(int)2e9)ans=-1;
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

