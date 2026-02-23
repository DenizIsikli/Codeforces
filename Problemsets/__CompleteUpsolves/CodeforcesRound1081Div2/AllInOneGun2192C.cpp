#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n,h,k;
    cin>>n>>h>>k;
    vector<int>a(n),l(n+1),r(n+1);
    int sm=0;
    for(int i=0;i<n;i++){cin>>a[i];sm+=a[i];}
    l[0]=1e18;r[n]=0;
    for(int i=0;i<n;i++)l[i+1]=min(l[i],a[i]);
    for(int i=n-1;i>=0;i--)r[i]=max(r[i+1],a[i]);
    int ans=1e18;
    int cycles=(h-1)/sm;
    int base=cycles*(n+k);
    h-=cycles*sm;
    int cur=0;
    for(int i=1;i<=n;i++){
        cur+=a[i-1];
        if(h<=cur||h<=cur-l[i]+r[i])ans=min(ans,base+i);
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
