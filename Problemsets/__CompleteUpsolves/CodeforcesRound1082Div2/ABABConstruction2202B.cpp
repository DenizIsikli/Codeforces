#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;
    string s;
    cin>>n>>s;
    if(n&1&&s[0]=='b'){cout<<"NO"<<endl;return;}
    if(n%2==0)s=' '+s,n++;
    for(int i=1;i<n;i+=2)if(s[i]==s[i+1]&&s[i]!='?'){cout<<"NO"<<endl;return;}
    cout<<"YES"<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){solve();}
    return 0;
}
