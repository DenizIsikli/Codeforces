#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n,l,r;
    cin>>n>>l>>r;
    vector<int>a(n+1,0);
    for(int i=1;i<=n;i++)a[i]=i;
    a[r]=a[l-1];
    for(int i=1;i<=n;i++)cout<<(a[i]^a[i-1])<<" ";
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
