#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n,a;
    cin>>n>>a;
    vector<int>v(n);
    int sm1=0,sm2=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]<a)sm1++;
        else if(v[i]>a)sm2++;
    }
    if(sm1>=sm2)cout<<a-1<<endl;
    else cout<<a+1<<endl;
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
