#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int f=a[k-1];
    sort(a.begin(),a.end());
    int i;
    for(i=0;i<n-1;i++){
        a[i]=a[i+1]-a[i];
        if(f<a[i])break;
    }
    if(i>=n-1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
