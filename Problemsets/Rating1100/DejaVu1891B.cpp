#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n,q;
    cin>>n>>q;
    vector<int>a(n),s{31};
    for(int i=0;i<n;i++)cin>>a[i];
    while(q--){
        int x;cin>>x;
        if(x<s.back())s.push_back(x);
    }
    for(int x:a){
        for(int y:s){
            if(x%(1<<y)==0)x|=1<<y-1;
        }
        cout<<x<<" ";
    }
    cout<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
