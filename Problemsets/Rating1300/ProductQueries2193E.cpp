#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n),dp(n+1, 1e9);
    for(int i=0;i<n;i++){
        cin>>a[i];
        dp[a[i]]=1;
    }
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            dp[j]=min(dp[j],dp[i]+dp[j/i]);
        }
    }
    for(int i=1;i<=n;i++){
        if(dp[i]==1e9)cout<<-1<<" ";
        else cout<<dp[i]<<" ";
    }
    cout<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
