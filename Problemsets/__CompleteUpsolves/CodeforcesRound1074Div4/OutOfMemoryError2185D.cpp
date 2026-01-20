#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int a[200000],b[200000],c[200000];
void solve(){
    int n,m,h;
    cin>>n>>m>>h;
    for(int i=0;i<n;i++)cin>>a[i];
    int idx=0;
    for(int i=0;i<m;i++){
        cin>>b[i]>>c[i];
        b[i]--;
        a[b[i]]+=c[i];
        if(a[b[i]]>h){
            for(int j=idx;j<=i;j++)a[b[j]]-=c[j];
            idx=i+1;
        }
    }
    for(int i=0;i<n;i++)cout<<a[i]<<(i==n-1?endl:' ');
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
