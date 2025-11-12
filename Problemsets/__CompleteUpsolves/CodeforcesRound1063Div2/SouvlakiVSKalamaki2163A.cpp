#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++){cin>>a[i];}
    sort(a+1,a+n+1);
    for(int i=2;i<=n-1;i+=2){
        if(a[i]!=a[i+1]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
