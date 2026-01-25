#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n,s,x;
    cin>>n>>s>>x;
    vector<int>a(n);
    for(auto&x:a)cin>>x;
    int sm=accumulate(a.begin(),a.end(),0LL);
    if(sm==s){
        cout<<"YES"<<endl;
        return;
    }
    while(sm<s){
        sm+=x;
    }
    if(sm>s){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){solve();}
    return 0;
}
