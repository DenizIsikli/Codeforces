#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;
    cin>>n;
    set<int>s;
    s.insert(n);
    for(int i=0;i<=60;i++){
        if(n&(1ll<<i))if(n-(1ll<<i)>0)s.insert(n-((1ll)<<i));
    }
    cout<<s.size()<<endl;
    for(auto i:s)cout<<i<<" ";
    cout<<endl;
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
