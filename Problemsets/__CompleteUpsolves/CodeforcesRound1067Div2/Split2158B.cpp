#include <bits/stdc++.h>
#include <unordered_map>
#define int long long
#define endl '\n'
using namespace std;

int n,cnt[400005];

void solve(){
    cin>>n;
    n*=2;
    for(int i=1;i<=n;i++)cnt[i]=0;
    for(int i=1,t;i<=n;i++)cin>>t,cnt[t]++;
    int ans=0,a=0,b=0;
    for(int i=1;i<=n;i++)if(cnt[i])ans+=cnt[i]&1?1:2,a+=cnt[i]%4==0,b+=cnt[i]&1;
    cout<<(ans-(a%2==1&&!b)*2)<<endl;
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
