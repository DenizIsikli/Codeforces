#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(auto&x:a)cin>>x;
    int mx=0;
    for(int i=0;i<n-1;i++){
        mx=max(mx,a[i]-a[i+1]);
    }
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            a[i]+=mx;
        }
    }
    cout<<(is_sorted(a.begin(),a.end())?"YES":"NO")<<endl;
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
