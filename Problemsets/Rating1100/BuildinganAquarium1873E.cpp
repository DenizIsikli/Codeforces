#include <bits/stdc++.h>
#define int long long

#define endl '\n'
using namespace std;

void solve(){
    int n,x;
    cin>>n>>x;
    vector<int>a(n);
    for(auto&i:a)cin>>i;
    int l=1,r=3e9;
    while(r>l+1){
        int m=l+(r-l)/2,d=0;
        for(int i:a)d+=m-min(m,i);
        d<=x?l=m:r=m;
    }
    cout<<l<<endl;
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
