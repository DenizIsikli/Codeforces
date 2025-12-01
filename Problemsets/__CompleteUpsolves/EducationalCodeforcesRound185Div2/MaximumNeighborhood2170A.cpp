#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n;
    cin>>n;
    int ans=0;
    for(int r=1;r<=n;r++){
        for(int c=1;c<=n;c++){
            int cost=(r-1)*n+c;
            if(r>1)cost+=(r-2)*n+c;
            if(r<n)cost+=r*n+c;
            if(c>1)cost+= (r-1)*n+c-1;
            if(c<n)cost+=(r-1)*n+c+1;
            ans=max(ans,cost);
        }
    }
    cout<<ans<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
