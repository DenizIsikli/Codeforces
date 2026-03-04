#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        int mx=*max_element(a.begin(),a.end());
        int cnt=0;
        for(auto x:a)if(x==mx)cnt++;
        cout<<cnt<<endl;
    }
    return 0;
}
