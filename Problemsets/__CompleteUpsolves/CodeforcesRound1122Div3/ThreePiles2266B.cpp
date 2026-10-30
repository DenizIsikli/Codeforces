#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(abs(a+c)-b>abs(a-b)){
        cout<<abs(a+c)-b<<endl;
    }else{cout<<abs(a-b)<<endl;}
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
