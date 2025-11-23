#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n,x=0,idx;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        x^=a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        x^=b[i];
    }
    if(!x){
        cout<<"Tie"<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        if(a[i]^b[i])idx=i;
    }
    cout<<(idx&1?"Mai":"Ajisai")<<endl;
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
