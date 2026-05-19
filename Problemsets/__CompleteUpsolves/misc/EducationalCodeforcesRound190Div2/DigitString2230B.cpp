#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int v[300005];
void solve(){
    string s;cin>>s;
    int n=s.size(),m=0,suf=0;
    for(int i=1;i<=n;i++)v[i]=v[i-1]+(s[i-1]=='2');
    for(int i=n;i>=1;i--){
        suf+=(s[i-1]=='1'||s[i-1]=='3');
        m=max(m,v[i]+suf);
    }
    cout<<n-m<<endl;
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
