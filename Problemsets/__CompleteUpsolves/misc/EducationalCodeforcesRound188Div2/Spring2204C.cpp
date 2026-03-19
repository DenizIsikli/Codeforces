#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int a,b,c,m;
    cin>>a>>b>>c>>m;
    int ab=lcm(a,b);
    int ac=m/lcm(a,c)*3;
    int bc=m/lcm(b,c)*3;
    int abc=m/lcm(ab,c)*2;
    ab=m/ab*3;
    cout<<m/a*6-ab-ac+abc<<" "<<m/b*6-ab-bc+abc<<" "<<m/c*6-ac-bc+abc<<endl;
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
