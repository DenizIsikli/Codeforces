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
    int n,k;
    cin>>n>>k;
    pair<int,pair<int,int>>p[n+1];
    for(int i=1;i<=n;i++)cin>>p[i].first>>p[i].second.first>>p[i].second.second;
    sort(p+1,p+n+1);
    int cur=k;
    for(int i=1;i<=n;i++){
        if(p[i].first>cur)break;
        cur=max(cur,p[i].second.second);
    }
    cout<<cur<<endl;
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

