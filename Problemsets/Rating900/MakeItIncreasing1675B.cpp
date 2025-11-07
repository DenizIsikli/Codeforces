#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto&x:a)cin>>x;
    int ans=0;
    for(int i=n-2;i>=0;i--){
        while(a[i]>=a[i+1]&&a[i]>0){
            a[i]/=2;
            ans++;
        }
        if(a[i]==a[i+1]){
            cout<<-1<<endl;
            return;
        }
    }
    cout<<ans<<endl;
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
