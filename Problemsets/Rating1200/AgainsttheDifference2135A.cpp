#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int>dp(n+1);
    vector<vector<int>>t(n+1);
    int ans=0;
    for(int i=1,x;i<=n;i++){
        cin>>x;
        t[x].push_back(i);
        dp[i]=dp[i-1];
        if(t[x].size()>=x)dp[i]=max(dp[i-1],dp[t[x][t[x].size()-x]-1]+x);
        ans=max(ans,dp[i]);
    }
    cout<<ans<<endl;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
