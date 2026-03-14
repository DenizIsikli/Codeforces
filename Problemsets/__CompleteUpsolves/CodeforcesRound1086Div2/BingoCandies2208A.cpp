#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;cin>>n;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x;cin>>x;
            mp[x]++;
        }
    }
    for(auto&[k,v]:mp){
        if(v>1LL*n*(n-1)){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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
