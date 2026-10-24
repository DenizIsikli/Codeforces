#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int a[100005];
void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    long long k=0;
    for(int i=n-1;i>=0;i--){
        long long d=abs(a[i]-k);
        if(k<a[i])k=a[i]+d;
        else k=a[i]-d;
    }
    cout<<k/2<<endl;
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
