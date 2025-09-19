#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;

void solve() {
    int n,m,x,y;
    cin>>n>>m;
    int px=0,py=0;
    int ans=0;
    while(n--){
        cin>>x>>y;
        ans+=x-px;
        if(((x-px+2)%2)!=((y-py+2)%2))ans--;
        px=x;
        py=y;
    }
    if(px!=m)ans+=m-px;
    cout<<ans<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

