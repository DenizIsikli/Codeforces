#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;

void solve() {
    int n;cin>>n;
    vector<int>a(n);
    for(auto&x:a)cin>>x;
    int cntMin=0,cntZero=0;
    for(auto&x:a){
        if(x==-1)cntMin++;
        if(x==0)cntZero++;
    }
    int ans=0;
    ans+=cntZero*1;
    if(cntMin%2==1)ans+=2;
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

