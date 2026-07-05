#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int>a(n),b(n);
    for(auto& x:a)cin>>x;
    for(auto& x:b)cin>>x;
    for(int i=1;i<n;i++)a[i]+=a[i-1];
    for(int i=1;i<n;i++)b[i]+=b[i-1];
    bool f=1;
    for(int i=0;i<n;i++)if(a[i]>b[i])f=0;
    cout<<(f?"YES":"NO")<<endl;
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
