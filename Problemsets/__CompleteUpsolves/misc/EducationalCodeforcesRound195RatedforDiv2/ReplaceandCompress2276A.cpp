#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    string s;
    cin>>s;
    bool p=0,m=0;
    for(int i=1;i<s.size()-1;i++){
        if(s[i-1]==s[i]&&s[i]==s[i+1])p=1;
        if(s[i-1]!=s[i]&&s[i]!=s[i+1])m=1;
    }
    cout<<1+p+m<<endl;
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
