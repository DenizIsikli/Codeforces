#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n,c,k;
    cin>>n>>c>>k;
    vector<int>a(n);
    for(auto&x:a)cin>>x;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(a[i]>c)break;
        int diff=min(1LL*k,c-a[i]);
        k-=diff;
        c+=a[i]+diff;
    }
    cout<<c<<endl;
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
