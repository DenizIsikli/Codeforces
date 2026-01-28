#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    s+=s;
    n*=2;
    int res=0,cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1')cnt=0;
        else cnt++;
        res=max(res,cnt);
    }
    cout<<res<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){solve();}
    return 0;
}
