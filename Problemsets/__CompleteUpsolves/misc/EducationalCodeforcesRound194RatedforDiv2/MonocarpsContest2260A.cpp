#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto&c:a)cin>>c;
    int zcnt=0;
    for(auto&c:a)if(c==0)zcnt++;
    if(zcnt<2){
        cout<<-1<<endl;
        return;
    }
    if(a[0]==0&&a[n-1]==0){
        cout<<0<<endl;
        return;
    }else if(a[0]==0||a[n-1]==0){
        cout<<1<<endl;
        return;
    }
    cout<<2<<endl;
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
