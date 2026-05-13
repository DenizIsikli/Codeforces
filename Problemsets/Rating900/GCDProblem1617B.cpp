#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;cin>>n;
    if(n%2==0)cout<<"2 "<<(n-1)-2<<" 1"<<endl;
    else{
        int cur=(n-1)/2;
        if(cur%2==0)cout<<cur-1<<" "<<cur+1<<" "<<1<<endl;
        else{
            cout<<cur-2<<" "<<cur+2<<" "<<1<<endl;
        }
    }
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
