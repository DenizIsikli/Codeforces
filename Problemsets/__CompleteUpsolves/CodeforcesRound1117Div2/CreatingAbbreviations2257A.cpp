#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    vector<bool>fq(26,false);
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        fq[s[0]-'a']=true;
    }
    bool f=true;
    for(int i=0;i<m;i++){
        string s;
        cin>>s;
        for(auto&c:s){
            if(!fq[c-'A'])f=false;
        }
    }
    cout<<(f?"YES":"NO")<<endl;
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

