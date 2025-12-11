#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

const int MAXN=1e5+10;
int n,a[MAXN],b[MAXN];

void solve(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i];
    int mx=0,mn=0;
    for(int i=1;i<=n;i++){
        int newMx=max(mx-a[i],b[i]-mn);
        int newMn=min(mn-a[i],b[i]-mx);
        mx=newMx,mn=newMn;
    }
    cout<<mx<<endl;
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
