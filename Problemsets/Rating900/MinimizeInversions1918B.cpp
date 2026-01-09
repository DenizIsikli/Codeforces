#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n;
    cin>>n;
    pair<int,int>ab[n];
    for(int i=0;i<n;++i)cin>>ab[i].first;
    for(int i=0;i<n;++i)cin>>ab[i].second;
    sort(ab,ab+n);
    for(int i=0;i<n;++i)cout<<ab[i].first<<' ';
    cout<<"\n";
    for(int i=0;i<n;++i)cout<<ab[i].second<<' ';
    cout<<"\n";
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
