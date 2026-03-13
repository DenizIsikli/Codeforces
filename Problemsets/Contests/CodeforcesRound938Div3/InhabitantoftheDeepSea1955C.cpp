#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int a[300005];
void solve(){
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>a[i];
    int m=(k+1)/2,b=k/2;
    int l=1,r=n,ans=0;
    while(m-a[l]>=0)m-=a[l],l++,ans++;
    if(m>0)a[l]-=m;
    while(b-a[r]>=0)b-=a[r],r--,ans++;
    cout<<min(ans,n)<<endl;

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
