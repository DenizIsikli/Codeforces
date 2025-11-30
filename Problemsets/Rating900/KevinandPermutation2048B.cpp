#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    int cnt=n/k;
    for(int i=1;i<=n;i++){
        cout<<(i%k?++cnt:i/k)<<endl;
    }
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
