#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int l,r;
long long solve(int n){
    return n-n/2-n/3-n/5-n/7+n/6+n/10+n/14+n/15+n/21+n/35-n/30-n/42-n/70-n/105+n/210;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        cin>>l>>r;
        cout<<solve(r)-solve(l-1)<<endl;
    }
    return 0;
}
