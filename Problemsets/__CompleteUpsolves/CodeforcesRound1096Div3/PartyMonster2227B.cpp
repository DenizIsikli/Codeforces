#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;string s;
    cin>>n>>s;
    int x=0,y=0;
    for(int i=0;i<n;i++){
        if(s[i]=='(')x++;
        else y++;
    }
    cout<<(x==y?"YES":"NO")<<endl;
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
