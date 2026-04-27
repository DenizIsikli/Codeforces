#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n,k,q;
    cin>>n>>k>>q;
    vector<int>a(n),mn(n,0),mex(n,0);
    for(int i=0;i<q;i++){
        int c,l,r;cin>>c>>l>>r;
        l--,r--;
        for(int i=l;i<=r;i++){
            if(c==1)mn[i]=1;
            else mex[i]=1;
        }
    }
    for(int i=0;i<n;i++){
        if(mn[i]&&mex[i])a[i]=k+1;
        else if(mex[i])a[i]=i%k;
        else a[i]=k;
    }
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
