#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n,x,y;
    cin>>n>>x>>y;
    vector<int>a(n);
    for(auto&i:a)cin>>i;
    int ans=0,sm=0;
    for(int i=0;i<n;i++)sm+=a[i]/x*y;
    for(int i=0;i<a.size();i++){
        ans=max(ans,sm-(a[i]/x*y)+a[i]);
    }
    cout<<ans<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){solve();}
    return 0;
}
