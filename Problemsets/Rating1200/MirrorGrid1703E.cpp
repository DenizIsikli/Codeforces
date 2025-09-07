#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;

int n;
string s[100006];

void solve() {
    cin>>n;
    int ans=0;
    for(int i=0;i<n;i++)cin>>s[i];
    for(int i=0;i<(n+1)/2;i++){
        for(int j=0;j<n/2;j++){
            int t=s[i][j]-'0'+s[j][n-i-1]-'0'+s[n-i-1][n-j-1]-'0'+s[n-j-1][i]-'0';
            ans+=min(t,4-t);
        }
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

