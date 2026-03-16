#include <bits/stdc++.h>
#include <iomanip>
#define int long double
#define endl '\n'
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        a[i]=x;
        b[i]=y/100.0;
    }
    int ans=0;
    for(int i=n-1;i>=0;i--){
        ans=max(ans,ans*(1-b[i])+a[i]);
    }
    cout<<fixed<<setprecision(10)<<ans<<endl;
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
