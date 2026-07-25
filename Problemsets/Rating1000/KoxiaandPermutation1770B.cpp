#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n,k;cin>>n>>k;
    int i=1;
    while(i<=n-i+1){
        if(i==n-i+1){cout<<i<<" ";break;}
        else{cout<<n-i+1<<" "<<i<<" ";}
        i++;
    }
    cout<<endl;
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
