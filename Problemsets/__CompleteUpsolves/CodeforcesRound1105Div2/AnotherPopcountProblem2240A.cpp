#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    int ans=0,i=1;
    while(n>=k*i){
        n-=k*i;
        i*=2;
        ans+=k;
    }
    ans+=n/i;
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
