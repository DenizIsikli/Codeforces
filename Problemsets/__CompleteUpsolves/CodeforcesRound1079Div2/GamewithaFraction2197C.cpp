#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int p,q;cin>>p>>q;
    if(p<q&&p*3>=q*2)cout<<"Bob"<<endl;
    else cout<<"Alice"<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){solve();}
    return 0;
}
