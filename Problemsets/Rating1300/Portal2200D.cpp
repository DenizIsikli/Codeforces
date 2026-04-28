#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n,x,y;
    cin>>n>>x>>y;
    x--,y--;
    vector<int>a,b;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        if(i<=x||i>y)a.push_back(k);
        else b.push_back(k);
    }
    if(!b.empty())rotate(b.begin(),min_element(b.begin(),b.end()),b.end());
    int m=b.empty()?-1:b[0];
    auto it=a.begin();
    while(it!=a.end()&&*it<m)it++;
    a.insert(it,b.begin(),b.end());
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<endl;
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
