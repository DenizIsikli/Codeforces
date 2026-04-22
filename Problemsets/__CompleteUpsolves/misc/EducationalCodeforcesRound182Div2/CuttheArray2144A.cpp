#include <bits/stdc++.h>
#include <numeric>

#define int long long
#define endl '\n'

using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto&x:a)cin>>x;
    int sm=accumulate(a.begin(),a.end(),0);
    if(sm%3==0)cout<<"1 2"<<endl;
    else cout<<"0 0"<<endl;
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

