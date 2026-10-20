#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;
    char c;
    string s;
    cin>>n>>c>>s;
    int ans=0;
    for(int i=0;i<s.size()/2;i++){
        if(s[i]==s[s.size()-1-i])continue;
        else{
            if(s[i]==c||s[s.size()-1-i]==c)ans++;
            else{ans+=2;}
        }
    }
    cout<<ans<<endl;
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
