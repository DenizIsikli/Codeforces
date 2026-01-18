#include <algorithm>
#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto&x:a)cin>>x;
    int mx=*max_element(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(a[i]==mx)swap(a[0],a[i]);
    }
    int res=0;
    vector<int>tmp;
    for(auto&x:a){
        tmp.push_back(x);
        res+=*max_element(tmp.begin(),tmp.end());
    }
    cout<<res<<endl;
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
