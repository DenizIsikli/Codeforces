#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int l,r;
    cin>>l>>r;
    for(int i=l;i<=r;i++){
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                cout<<j<<" "<<i-j<<endl;
                return;
            }
        }
    }
    cout<<-1<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
