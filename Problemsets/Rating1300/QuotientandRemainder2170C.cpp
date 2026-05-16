#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    k++;
    vector<int>q(n),r(n);
    for(int i=0;i<n;i++){cin>>q[i];q[i]++;}
    for(int i=0;i<n;i++){cin>>r[i];r[i]++;}
    sort(q.begin(),q.end()),sort(r.begin(),r.end());
    int s=0,e=n-1;
    while(s<n&&e>=0){
        if(q[s]*r[e]<=k)s++,e--;
        else e--;
    }
    cout<<s<<endl;
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
