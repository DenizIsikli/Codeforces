#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    string s;cin>>s;
    int sm=0;
    for(char c:s){
        sm+=(c-'0');
    }
    --s[0];
    sort(s.rbegin(),s.rend());
    int cnt=0;
    while(sm>=10){
        sm-=s[cnt++]-'0';
    }
    cout<<cnt<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){solve();}
    return 0;
}
