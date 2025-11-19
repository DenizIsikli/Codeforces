#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n,x,y,minn,maxx;
    cin>>n>>x>>y;
    maxx=max(x,y),minn=min(x,y);
    if(maxx>0&&0==(n-1)%maxx&&minn==0){
        for(int i=2;i<=n;i+=maxx){
            for(int j=1;j<=maxx;j++)cout<<i<<' ';
        }
        cout<<endl;
    }else cout<<-1<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
