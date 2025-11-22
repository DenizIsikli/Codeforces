#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    if(a[0]==-1)a[0]=a[n-1];
    if(a[n-1]==-1)a[n-1]=a[0];
    for(int i=0;i<n;i++){
        if(a[i]==-1)a[i]=0;
    }
    cout<<abs(a[n-1]-a[0])<<endl;
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<endl;
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
