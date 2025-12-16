#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    string s,t;
    cin>>s>>t;
    int n=s.size(),m=t.size();
    int L=lcm(n,m);
    string S="",T="";
    for(int i=0;i<L/n;i++)S+=s;
    for(int i=0;i<L/m;i++)T+=t;
    if(S==T)cout<<S<<endl;
    else cout<<-1<<endl;
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
