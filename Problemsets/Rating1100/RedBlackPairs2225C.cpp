#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;
    string a,b;
    cin>>n>>a>>b;
    int ans=0;
    for(int i=0;i<n;i++){
        if(i<n-1&&a[i+1]==a[i]&&b[i+1]==b[i])i++;
        else if(a[i]!=b[i])ans++;
    }
    cout<<ans<<endl;
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
