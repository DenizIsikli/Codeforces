#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

int a[200002];

void solve(){
    int n;
    cin>>n;
    if(n<=2){
        for(int i=n;i>=1;i--){cout<<i<<" ";}
        return;
    }
    a[1]=2,a[(n+1)/2]=1,a[n]=3;
    int s=3;
    for(int i=2;i<n;i++){
        if(i!=(n+1)/2)a[i]=++s;
    }
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
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
