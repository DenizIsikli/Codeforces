#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    bool ok=a[n-1]==b[n-1];
    for(int i=n-1;i>=0;i--){
        if(a[i]==b[i]||(a[i]^a[i+1])==b[i]||(a[i]^b[i+1])==b[i]);
        else ok=false;
    }
    cout<<(ok?"YES":"NO")<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
