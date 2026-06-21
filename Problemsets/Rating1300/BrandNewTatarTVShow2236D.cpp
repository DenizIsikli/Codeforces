#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    int last=-1e9;
    for(auto[first,v]:mp){
        if(v%2==0||first-last<=k){
            cout<<"YES"<<endl;
            return;
        }
        last=first;
    }
    cout<<"NO"<<endl;
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
