#include <bits/stdc++.h>
#include <memory_resource>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int ans=1;
    for(int i=1;i<n;i++){
        if(s[i]!=s[i-1])ans++;
    }
    if(ans!=n&&s[0]!=s[n-1])ans++;
    cout<<ans<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){solve();}
    return 0;
}
