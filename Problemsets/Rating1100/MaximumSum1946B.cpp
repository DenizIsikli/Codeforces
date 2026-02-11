#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2*1e5+10;
const int MOD=1e9+7;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int S=0,sm=0;
    int cur=0;
    for(int i=0;i<n;i++){
        sm=(sm+a[i])%MOD;
        cur+=a[i];
        cur=max(cur,0LL);
        S=max(S,cur);
    }
    for(int i=0;i<k;i++){
        sm=(sm+S+MOD)%MOD;
        S=(S*2)%MOD;
    }
    cout<<sm<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){solve();}
    return 0;
}
