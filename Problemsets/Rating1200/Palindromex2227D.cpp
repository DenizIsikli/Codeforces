#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n;
vector<int>v;
int solve(int l, int r){
    set<int>s;
    for(int i=0;i<=n;i++)s.insert(i);
    while(l>=0&&r<2*n){
        if(v[l]!=v[r])break;
        s.erase(v[l]);
        l--;r++;
    }
    return *s.begin();
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        cin>>n;
        v=vector<int>(2*n);
        int p1=-1,p2;
        for(auto&x:v)cin>>x;
        for(int i=0;i<2*n;i++){
            if(v[i]==0){
                if(p1==-1)p1=i;
                else p2=i;
            }
        }
        int ans=max({solve(p1,p1),solve(p2,p2),solve((p1+p2)/2,(p1+p2+1)/2)});
        cout<<ans<<endl;
    }
    return 0;
}
