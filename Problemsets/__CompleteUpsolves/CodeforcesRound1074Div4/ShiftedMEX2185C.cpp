#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto&x:a)cin>>x;
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()),a.end());
    int res=0,cnt=0;
    for(int i=0;i<a.size();i++){
        if(i>0&&a[i]==a[i-1]+1)cnt++;
        else cnt=1;
        res=max(res,cnt);
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
