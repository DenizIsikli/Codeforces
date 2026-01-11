#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    if(n==1){cout<<"1\n1"<<endl;return;}
    if(k==1||k==n){cout<<-1<<endl;return;}
    int b1=k-k%2;
    int b2=k+1+k%2;
    cout<<"3\n1 "<<b1<<" "<<b2<<endl;

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
