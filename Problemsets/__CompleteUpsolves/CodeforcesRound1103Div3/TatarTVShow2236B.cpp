#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n,k;cin>>n>>k;
    string s;cin>>s;
    vector<int>cnt(k,0);
    for(int i=0;i<n;i++)cnt[i%k]+=s[i]-'0';
    bool ok=true;
    for(int r=0;r<k;r++){
        if(cnt[r]%2){
            ok=false;
            return;
        }
    }
    cout<<(ok?"YES":"NO")<<endl;
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
