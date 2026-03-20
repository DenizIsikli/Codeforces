#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    int y=min(((m+1)/3),min(k-1,n-k));
    int x=(m+1-y)/2;
    cout<<min(x+y+1,n)<<endl;
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
