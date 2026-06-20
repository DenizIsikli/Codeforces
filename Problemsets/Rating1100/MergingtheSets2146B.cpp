#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    map<int,vector<int>>f;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        while(k--){
            int x;
            cin>>x;
            f[x].push_back(i);
        }
    }
    set<int>s;
    bool flag=false;
    for(int i=1;i<=m;i++){
        if(f[i].empty())flag=true;
        else if(f[i].size()==1)s.insert(f[i][0]);
    }
    if(!flag&&n-s.size()>=2)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}
