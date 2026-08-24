#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;cin>>n;
    int l=0,r=INT_MAX;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        if(i&1)r=min(r,x);
        else l=max(l,x);
    }
    cout<<(n%2==0&&l+2<=r?"YES":"NO")<<endl;
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
