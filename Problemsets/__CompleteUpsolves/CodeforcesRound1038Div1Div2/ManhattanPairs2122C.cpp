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
#include <array>

#define int long long
#define endl '\n'

using namespace std;

void solve() {
    auto cmp=[](array<int,3>a,array<int,3>b){
        return a[1]<b[1];
    };
    int n;
    cin>>n;
    array<int,3>p[200010];
    for(int i=0;i<n;i++)cin>>p[i][0]>>p[i][1],p[i][2]=i+1;
    sort(p,p+n);
    sort(p,p+(n/2),cmp);
    sort(p+(n/2),p+n,cmp);
    for(int i=0;i<n/2;i++)cout<<p[i][2]<<" "<<p[n-i-1][2]<<endl;
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

