#include <algorithm>
#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>a(n),b(m);
    for(auto&x:a)cin>>x;
    for(auto&x:b)cin>>x;
    vector<bool>dead(n);
    map<int,vector<int>>mp;
    string instructions;
    cin>>instructions;
    sort(b.begin(),b.end());
    for(int i=0;i<n;i++){
        if(b[0]<a[i]){
            int ld=a[i]-(*(lower_bound(b.begin(),b.end(),a[i])-1));
            mp[-ld].push_back(i);
        }
        if(b[m-1]>a[i]){
            int rd=*lower_bound(b.begin(),b.end(),a[i])-a[i];
            mp[rd].push_back(i);
        }
    }
    int pos=0;
    int lives=n;
    for(auto&x:instructions){
        if(x=='L')pos--;
        else pos++;
        for(int i:mp[pos]){
            if(dead[i])continue;
            dead[i]=true;
            lives--;
        }
        mp[pos].clear();
        cout<<lives<<" ";
    }
    cout<<endl;
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
