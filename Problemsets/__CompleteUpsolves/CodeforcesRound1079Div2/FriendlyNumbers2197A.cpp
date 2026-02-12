#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int x;
    cin>>x;
    int ans=0;
    for(int i=0;i<=90;i++){
        int X=x+i,s=0;
        while(X)s+=X%10,X/=10;
        if(s==i)ans++;
    }
    cout<<ans<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){solve();}
    return 0;
}
