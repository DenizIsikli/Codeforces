#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n,f,a,b,x,m=0;
    cin>>n>>f>>a>>b;
    for(int i=0;i<n;i++){
        cin>>x;
        f-=min(b,(x-m)*a);
        m=x;
    }
    if(f<=0)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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
