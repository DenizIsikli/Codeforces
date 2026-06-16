#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int a,b,x;
    cin>>a>>b>>x;
    int ans=1e18;
    int i=0;
    while(a!=b){
        if(b>a){
            swap(a,b);
        }
        ans=min(ans,abs(a-b)+i);
        a/=x;
        i++;
    }
    ans=min(ans,i);
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
