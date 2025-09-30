#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto&x:a)cin>>x;
    sort(a.begin(),a.end());
    int ans=INT_MIN;
    for(int i=0;i<n;i+=2)ans=max(ans,a[i+1]-a[i]);
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

