#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n,k;cin>>n>>k;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        mp[x]++;
    }
    multiset<int>st;
    for(auto x:mp){
        st.insert(x.second);
    }
    int ans=st.size();
    for(int x:st){
        if(k>=x)k-=x,ans--;
    }
    cout<<max(1LL,ans)<<endl;
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
