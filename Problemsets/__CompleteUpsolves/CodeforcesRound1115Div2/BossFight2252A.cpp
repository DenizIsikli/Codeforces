#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n,x;
    cin>>n;
    vector<int>a(1010,0);
    for(int i=0;i<n;i++){
        cin>>x;
        a[x]++;
    }
    int res=0;
    for(int i=1;i<=1000;i++){
        res+=i*min(a[i],n-a[i]+2);
    }
    cout<<res<<endl;
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
