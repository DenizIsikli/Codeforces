#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n,h,l;
    cin>>n>>h>>l;
    if(h>l)swap(h,l);
    int x,cnth=0,cntl=0;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x<=h)cnth++;
        if(x<=l)cntl++;
    }
    cout<<min(cnth,cntl/2)<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){solve();}
    return 0;
}
