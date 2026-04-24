#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int>f(n+1);
    f[1]=1;
    f[2]=2;
    for(int i=3;i<=n;i++)f[i]=f[i-1]+f[i-2];
    while(m--){
        int w,l,h;
        cin>>w>>l>>h;
        if(min({w,l,h})>=f[n]&&max({w,l,h})>=f[n]+f[n-1])cout<<1;
        else cout<<0;
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
