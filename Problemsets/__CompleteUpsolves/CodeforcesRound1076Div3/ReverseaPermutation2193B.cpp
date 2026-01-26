#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;cin>>n;
    std::vector<int >a(n) ;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)cin>>a[i],mp[a[i]]=i;
    for(int i=0;i<n;i++){
        if(a[i]==n-i)continue;
        reverse(a.begin()+i,a.begin()+mp[n-i]+1);
        break;
    }
    for(auto &e:a)cout<<e<<' ';
    cout<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){solve();}
    return 0;
}
