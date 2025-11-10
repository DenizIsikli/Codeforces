#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x,y;
    cin>>n;
    int ans=0;
    while(n--){
        cin>>x>>y;
        ans=max(ans,x+y);
    }
    cout<<ans<<endl;
}
