#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int ans=0;
    int last=-1e9;
    for(int i=0;i<n;i++){
        if(s[i]=='1'&&i-last>=k)ans++;
        if(s[i]=='1')last=i;
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

