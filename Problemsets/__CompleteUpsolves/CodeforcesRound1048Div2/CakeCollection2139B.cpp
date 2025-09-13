#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;

void solve() {
    int n,t;
    cin>>n>>t;
    vector<int>a(n);
    for(auto&x:a)cin>>x;
    sort(a.begin(),a.end(),greater<int>());
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=1ll*a[i]*max(0ll,t-i);
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

