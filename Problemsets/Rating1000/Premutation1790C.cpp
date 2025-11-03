#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n;cin>>n;
    vector<vector<int>>perm(n,vector<int>(n-1));
    vector<int>p(n,0);
    vector<int>cnt(n+1,0);
    for(int i=0;i<n;i++){
        p[i]=i+1;
        for(int j=0;j<n-1;j++){
            cin>>perm[i][j];
            if(j==0)cnt[perm[i][j]]++;
        }
    }
    for(int i=1;i<=n;i++){
        if(cnt[i]==n-1){
            p[0]=i;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(perm[i][0]!=p[0]){
            for(int j=0;j<n-1;j++){
                p[j+1]=perm[i][j];
            }
        }
    }
    for(auto&x:p)cout<<x<<' ';
    cout<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
