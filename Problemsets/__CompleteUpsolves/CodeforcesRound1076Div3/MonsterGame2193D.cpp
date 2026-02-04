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
    int ans=0;
    sort(a.begin(),a.end());
    vector<int>pre(n+1,0);
    for(int i=1;i<=n;i++)pre[i]=pre[i-1]+b[i-1];
    for(int i=0;i<n;i++){
        int x=a[i];
        int rem=n-i;
        int idx=upper_bound(pre.begin(),pre.end(),rem)-pre.begin()-1;
        ans=max(ans,idx*x);
    }
    cout<<ans<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){solve();}
    return 0;
}
