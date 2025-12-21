#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        int f,t;
        cin>>f>>t;
        if(t<=k)mx=max(mx,f);
        else mx=max(mx,f-(t-k));
    }
    cout<<mx<<endl;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
