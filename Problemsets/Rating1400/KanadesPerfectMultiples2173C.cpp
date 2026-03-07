#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        mp[x]=1;
    }
    vector<int>ans;
    for(auto&[x,y]:mp){
        if(y)ans.push_back(x);

        for(int i=x;i<=k;i+=x){
            if(!mp.count(i)){cout<<-1<<endl;return;}
            mp[i]=0;
        }
    }
    cout<<ans.size()<<endl;
    for(auto&x:ans)cout<<x<<" ";
    cout<<endl;
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
