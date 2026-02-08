#include <bits/stdc++.h>
#include <queue>
#include <unordered_map>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n,k;
    string s;
    cin>>n>>s;
    k=s[0]=='1';
    for(int i=1;i<n;++i)if(s[i]!=s[i-1])k++;
    if(k==2)k=1;
    else if(k>2)k-=2;
    cout<<n+k<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){solve();}
    return 0;
}
