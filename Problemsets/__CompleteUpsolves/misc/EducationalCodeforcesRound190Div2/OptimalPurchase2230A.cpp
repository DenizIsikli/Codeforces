#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    int grp=n/3,rem=n%3;
    int ans=min((grp*3)*a,grp*b);
    ans+=min(rem*a,b);
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
