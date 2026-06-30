#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n,c;cin>>n>>c;
    vector<pair<int,int>>a(n),b(n);
    vector<int>aa(n),bb(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        aa[i]=a[i].first;
        a[i].second=i;
    }
    for(int i=0;i<n;i++){
        cin>>b[i].first;
        bb[i]=b[i].first;
        b[i].second=i;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int ans=0;
    for(int i=0;i<n;i++){
        if(a[i].first<b[i].first){
            cout<<-1<<endl;
            return;
        }
        ans+=a[i].first-b[i].first;
    }
    for(int i=0;i<n;i++){
        if(aa[i]<bb[i]){
            ans+=c;
            break;
        }
    }
    cout<<ans<<endl;
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
