#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int>a(n),b(n);
    for(auto&x:a)cin>>x;
    int ans=0,mx=0;
    for(int i=0;i<n;i++){
        if(a[i]>=mx)ans++;
        mx=max(mx,a[i]);
    }
    cout<<ans<<endl;
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
