#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(auto& x:a)cin>>x;
    int sm=accumulate(a.begin(),a.end(),0LL);
    bool allOnes=true,inner=false;
    for(int i=0;i<n;i++){
        if(a[i]!=1)allOnes=false;
        if(i>0&&i<n-1&&a[i]>=2)inner=true;
    }
    if(allOnes){cout<<-1<<endl;return;}
    if(inner){cout<<sm-1<<endl;return;}
    cout<<sm-(n-1)<<endl;
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
