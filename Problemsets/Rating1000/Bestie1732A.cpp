#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    int g=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        g=__gcd(g,a[i]);
    }
    if(g==1){cout<<0<<endl;return;}
    if(__gcd(g,n)==1){cout<<1<<endl;return;}
    if(__gcd(g,n-1)==1){cout<<2<<endl;return;}
    cout<<3<<endl;
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
