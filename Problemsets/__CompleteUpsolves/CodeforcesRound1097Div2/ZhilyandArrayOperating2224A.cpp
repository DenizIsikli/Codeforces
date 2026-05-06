#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=n-1;i>0;i--){
        if(a[i]<0)continue;
        a[i-1]=a[i-1]+a[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++)if(a[i]>0)cnt++;
    cout<<cnt<<endl;
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
