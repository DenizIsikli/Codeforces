#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x=a*d,y=b*c;
    if(x==y)cout<<0<<endl;
    else if(y!=0&&x%y==0||x!=0&&y%x==0)cout<<1<<endl;
    else cout<<2<<endl;
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
