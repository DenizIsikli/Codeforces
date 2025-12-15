#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>b(a.size());
    int ans=0;
    for(int i=0;i<a.size();i++){
        for(int j=i+1;j<a.size();j++){
            if(a[i]>a[j]&&b[j]!=1){
                ans++;
                b[j]=1;
            }
        }
    }
    cout<<ans<<endl;
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
