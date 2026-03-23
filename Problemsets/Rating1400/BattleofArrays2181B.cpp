#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n,m;cin>>n>>m;
    priority_queue<int>a,b;
    for(int i=0;i<n;i++){int x;cin>>x;a.push(x);}
    for(int i=0;i<m;i++){int x;cin>>x;b.push(x);}
    bool turn=1;
    while(!a.empty()&&!b.empty()){
        int x=a.top(),y=b.top();
        if(turn){
            if(x>=y)b.pop();
            else b.pop(),b.push(y-x);
        }else{
            if(y>=x)a.pop();
            else a.pop(),a.push(x-y);
        }
        turn^=1;
    }
    cout<<(a.empty()?"Bob":"Alice")<<endl;
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
