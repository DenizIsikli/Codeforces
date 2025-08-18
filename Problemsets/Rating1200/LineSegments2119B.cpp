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
    int n,px,py,qx,qy;
    cin>>n>>px>>py>>qx>>qy;
    vector<double>a(100010);
    for(int i=1;i<=n;i++)cin>>a[i];
    a[++n]=sqrt((px-qx)*(px-qx)+(py-qy)*(py-qy));
    sort(a.begin()+1, a.begin()+n+1);
    double sum=a[n];
    for(int i=1;i<n;i++)sum-=a[i];
    cout<<(sum<=0?"YES":"NO")<<endl;
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

