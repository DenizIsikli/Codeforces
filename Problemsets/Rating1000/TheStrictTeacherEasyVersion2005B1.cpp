#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n,m,q,b1,b2,a;
    cin>>n>>m>>q>>b1>>b2>>a;
    if(b1>b2)swap(b1,b2);
    if(a<b1)cout<<b1-1<<endl;
    else if(a<b2)cout<<(b2-b1)/2<<endl;
    else cout<<n-b2<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
