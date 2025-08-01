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
    vector<int>a(n);
    for(auto&x:a)cin>>x;
    string ans;
    int l=0,r=n-1;
    for(int i=0;i<n;i++){
        bool takeleft;
        if(i&1)takeleft=a[l]<a[r];
        else takeleft=a[l]>a[r];
        if(takeleft)ans.push_back('L'),l++;
        else ans.push_back('R'),r--;
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

