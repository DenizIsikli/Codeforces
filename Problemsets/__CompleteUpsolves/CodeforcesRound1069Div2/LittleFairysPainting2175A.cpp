#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++){int x;cin>>x;s.insert(x);}
    int tmp=s.size();
    for(auto&x:s){
        if(tmp<=x){
            cout<<x<<endl;
            return;
        }
    }
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
