#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;cin>>n;
    if(n==10)cout<<-1<<endl;
    else if(n%12==10)cout<<"22 "<<n-22<<endl;
    else cout<<n%12<<" "<<n-(n%12)<<endl;
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
