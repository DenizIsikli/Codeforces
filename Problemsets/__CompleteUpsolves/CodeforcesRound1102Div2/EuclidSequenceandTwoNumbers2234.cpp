#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(auto&x:a)cin>>x;
    sort(a.rbegin(),a.rend());
    for(int i=2;i<n;i++){
        if(a[i-2]%a[i-1]!=a[i]){
            cout<<-1<<endl;
            return;
        }
    }
    cout<<a[0]<<" "<<a[1]<<endl;
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
