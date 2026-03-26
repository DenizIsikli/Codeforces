#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    if(n%2==1){cout<<"Mike"<<endl;return;}
    int sml=0;
    for(int i=0;i<n;i++){
        if(a[i]<a[sml])sml=i;
    }
    if(sml%2==0)cout<<"Joe"<<endl;
    else cout<<"Mike"<<endl;
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
