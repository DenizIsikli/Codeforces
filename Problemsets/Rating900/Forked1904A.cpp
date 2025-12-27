#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

int dx[4]={-1,1,-1,1},dy[4]={-1,-1,1,1};

void solve(){
    int a,b;cin>>a>>b;
    int x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
    set<pair<int, int>> st1,st2;
    for(int j=0;j<4;j++){
        st1.insert({x1+dx[j]*a,y1+dy[j]*b});
        st2.insert({x2+dx[j]*a,y2+dy[j]*b});
        st1.insert({x1+dx[j]*b,y1+dy[j]*a});
        st2.insert({x2+dx[j]*b,y2+dy[j]*a});
    }
    int ans=0;
    for(auto x:st1)
    if(st2.find(x)!=st2.end())
        ans++;
    cout<<ans<<'\n';
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

