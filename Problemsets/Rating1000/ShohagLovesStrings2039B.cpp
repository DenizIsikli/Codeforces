#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    string s;cin>>s;
    for(int i=0;i+1<s.size();i++){
        if(s[i]==s[i+1]){
            cout<<s.substr(i,2)<<endl;
            return;
        }
    }
    for(int i=0;i+2<s.size();i++){
        if(s[i]!=s[i+1]&&s[i]!=s[i+2]&&s[i+1]!=s[i+2]){
            cout<<s.substr(i,3)<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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
