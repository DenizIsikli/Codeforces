#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>cnt(3);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        cnt[x]++;
    }
    if(cnt[1]>cnt[2])swap(cnt[1],cnt[2]);
    cout<<cnt[0]+cnt[1]+(cnt[2]-cnt[1])/3<<endl;
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
