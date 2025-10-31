#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int ans=-1;
    for(auto&x:{2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53}){
        int ok = 0;
        for(auto&i:a) {
            if(i%x){
                ok=1;
                break;
            }
        }
        if(ok){
            cout<<x<<'\n';
            break;
        }
    }
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
