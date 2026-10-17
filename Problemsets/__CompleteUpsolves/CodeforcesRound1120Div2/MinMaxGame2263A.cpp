#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    int cntO=0,cntZ=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1)cntO++;
        else cntZ++;
    }
    if(cntO>=cntZ){cout<<"Bessie"<<endl;return;}
    cout<<"Elsie"<<endl;
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
