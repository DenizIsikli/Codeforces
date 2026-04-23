#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    string s;
    cin>>s;
    int ans=0;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1])ans++;
    }
    cout<<(ans<=2?"YES":"NO")<<endl;
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
