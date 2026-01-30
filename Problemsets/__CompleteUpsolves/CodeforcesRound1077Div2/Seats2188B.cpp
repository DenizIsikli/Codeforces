#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<char>a(n+2,'0');
    for(int i=1;i<=n;i++)cin>>a[i];
    int res=0,cnt=0;
    for(int i=0;i<=n+1;i++){
        if(a[i]=='0')cnt++;
        if(a[i]=='1'||i==n+1){
            if(a[i]=='1')res++;
            res+=cnt/3;
            cnt=0;
        }
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
