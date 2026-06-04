#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int m;cin>>m;
    vector<vector<int>>v(m);
    unordered_map<int,int>mp;
    for(int i=0;i<m;i++){
        int n;cin>>n;
        v[i].resize(n);
        for(int j=0;j<n;j++){
            cin>>v[i][j];
            mp[v[i][j]]=i;
        }
    }
    vector<int>ans;
    for(int i=0;i<m;i++){
        bool fnd=false;
        for(int x:v[i]){
            if(mp[x]==i){
                ans.push_back(x);
                fnd=true;
                break;
            }
        }
        if(!fnd){
            cout<<-1<<endl;
            return;
        }
    }
    for(int x:ans)cout<<x<<" ";
    cout<<endl;
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
