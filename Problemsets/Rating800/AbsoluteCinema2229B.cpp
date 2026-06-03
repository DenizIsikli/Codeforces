#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int>a(n),b(n);
    for(int &x:a)cin>>x;
    for(int &x:b)cin>>x;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=max(a[i], b[i]);
    }
    int ans=0;
    for (int i=0;i<n;i++){
        ans=max(ans,sum+min(a[i],b[i]));
    }
    cout<<ans<<"\n";
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
