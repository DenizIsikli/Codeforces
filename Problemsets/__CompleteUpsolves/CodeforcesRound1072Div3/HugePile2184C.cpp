#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    int l=n,r=n;
    int cnt=0;
    while(r!=1){
        if(l<=k&&k<=r)break;
        l=l/2;
        r=r/2+r%2;
        cnt++;
    }
    if(l<=k&&k<=r)cout<<cnt<<endl;
    else cout<<-1<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    cin.tie(nullptr);
    while(t--){
        solve();
    }
    return 0;
}
