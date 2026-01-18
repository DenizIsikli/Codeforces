#include <bits/stdc++.h>
#include <unordered_map>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n;
    cin>>n;
    unordered_map<int,int>fq;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        fq[x]++;
    }
    if(fq[0]==0)cout<<"NO\n";
    else if(fq[1]>0)cout<<"YES\n";
    else cout<<(fq[0]==1?"YES":"NO")<<'\n';
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
