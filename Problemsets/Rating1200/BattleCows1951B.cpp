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
    vector<int>a(n+1);
    for(int i=1;i<=n;i++){cin>>a[i];}
    int p=1;
    while(p<=n&&a[p]<=a[k])p++;
    if(p>k)cout<<p-2<<endl;
    else{
        int tp=p+1;
        while(a[tp]<a[k])tp++;
        cout<<(max(tp-p-(p==1),p-2))<<endl;
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

