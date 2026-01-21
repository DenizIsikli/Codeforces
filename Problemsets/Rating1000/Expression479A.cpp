#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;    
    cout<<max({(a+b)*c,a*b*c,a*(b+c),a+b+c})<<endl;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
