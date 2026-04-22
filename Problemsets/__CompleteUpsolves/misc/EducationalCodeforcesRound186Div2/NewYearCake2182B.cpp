#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

int f(int a, int b,int u=1){
    if(a<u)return 0;
    return 1+f(b,a-u,u*2);
}

void solve(){
    int a,b;
    cin>>a>>b;
    cout<<max(f(a,b,1),f(b,a,1))<<endl;
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
