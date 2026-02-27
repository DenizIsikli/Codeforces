#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n,m,d;
    cin>>n>>m>>d;
    int h=d/m+1;
    int ans=n/h+(n%h!=0);
    cout<<ans<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){solve();}
    return 0;
}
