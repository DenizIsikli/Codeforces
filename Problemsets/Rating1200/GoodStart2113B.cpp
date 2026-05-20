#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int w,h,a,b,x1,y1,x2,y2;
    cin>>w>>h>>a>>b>>x1>>y1>>x2>>y2;
    cout<<((x1!=x2&&abs(x1-x2)%a==0)||(y1!=y2&&abs(y1-y2)%b==0)?"YES":"NO")<<endl;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
