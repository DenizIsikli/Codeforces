#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int cur=INT_MAX;
    int ans=0;
    for(int i=n-1;i>=0;i--){
        cur=min(cur-1,a[i]);
        cur=max(cur,0LL);
        ans+=cur;
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
