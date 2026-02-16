#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n,a,d,f;
    cin>>n;
    f=0;
    for(int i=1;i<=n;i++){
        cin>>a;
        while(a%2==0)a/=2;
        d=i;
        while(d%2==0)d/=2;
        if(a!=d)f=1;
    }
    cout<<(f?"NO":"YES")<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){solve();}
    return 0;
}
