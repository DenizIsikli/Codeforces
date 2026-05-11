#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int ans=a[n-1];
    for(int i=n-2;i>=0;i--){
        ans=max(ans+1,a[i]);
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
