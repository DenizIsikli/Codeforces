#include <bits/stdc++.h>
#define int long long

#define endl '\n'
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    unordered_map<int,int>mp,pm;
    for(auto&x:a)cin>>x,mp[x]++;
    for(auto&p:mp)if(p.second%k){cout<<0<<endl;return;}
    int l=0,res=0;
    for(int r=0;r<n;r++){
        pm[a[r]]++;
        while(pm[a[r]]>mp[a[r]]/k)pm[a[l++]]--;
        res+=r-l+1;
    }
    cout<<res<<endl;
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
