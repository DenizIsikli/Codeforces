#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    map<int,int>mp;
    for(int&i:a)cin>>i,mp[i]++;
    sort(a.rbegin(),a.rend());
    long long ans=0,mex=0;
    for(int i=0;i<n;i++){
        if(mex==a[0])mex++;
        ans+=a[0]+mex;
        if(mp[mex])mex++;
    }
    cout<<ans<<endl;
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
