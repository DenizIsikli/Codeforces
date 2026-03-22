#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto&x:a)cin>>x;
    for(int i=0;i<n;i++){
        int x=0;
        int y=0;
        for(int j=i+1;j<n;j++){
            x+=(a[i]>a[j]),y+=(a[i]<a[j]);
        }
        cout<<max(x,y)<<" ";
    }
    cout<<endl;
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
