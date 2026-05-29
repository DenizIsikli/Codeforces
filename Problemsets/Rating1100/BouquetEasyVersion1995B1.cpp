#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n,m;cin>>n>>m;
    vector<int>a(n);
    for(auto&x:a)cin>>x;
    sort(a.begin(),a.end());
    int ans=0,sm=0;
    int l=0;
    for(int r=0;r<n;r++){
        sm+=a[r];
        while(l<=r&&(a[r]-a[l]>1||sm>m)){
            sm-=a[l++];
        }
        ans=max(ans,sm);
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
