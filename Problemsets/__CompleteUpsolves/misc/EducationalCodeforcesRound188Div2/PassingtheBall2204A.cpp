#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;
    string s;
    cin>>n>>s;
    int ans=-1;
    for(int i=0;i<n;i++){
        if(s[i]=='L'){ans=i+1;break;}
    }
    if(ans==-1)cout<<n<<endl;
    else cout<<ans<<endl;
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
