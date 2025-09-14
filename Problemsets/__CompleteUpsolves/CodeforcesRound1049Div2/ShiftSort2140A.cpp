#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;

void solve() {
    int n;
    string s;
    cin>>n>>s;
    string t=s;
    sort(t.begin(),t.end());
    int ans=0;
    for(int i=0;i<n;i++)if(s[i]!=t[i])ans++;
    cout<<ans/2<<endl;
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

