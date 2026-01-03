#include <bits/stdc++.h>
#define int long long

#define endl '\n'
using namespace std;

void solve(){
    int n;
    cin>>n;
    int sm=0,cnt_one=0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x>0)cnt_one++;
        sm+=x;
    }
    int sm2=sm-cnt_one;
    int overlap=n-1-sm2;
    cout<<cnt_one-max(0ll,overlap)<<endl;
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
