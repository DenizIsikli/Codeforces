#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n,a,sum=0,ned=0,f=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        sum+=a;ned+=i;
        if(sum<ned)f=1;
    }
    cout<<(f?"NO":"YES")<<endl;
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
