#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int>a(n),ans;
    for(auto&x:a)cin>>x;
    int par=0;
    for(int i=n-1;i>=0;i--){
        if(par)a[i]=-a[i];
        if(a[i]>0){
            ans.push_back(i);
            par^=1;
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]+1<<" ";
    }
    cout<<endl;
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
