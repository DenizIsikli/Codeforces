#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n,x;
    cin>>n>>x;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int mn=a[0],mx=a[0];
    int res=0;
    for(int i=1;i<n;i++){
        mn=min(mn,a[i]);
        mx=max(mx,a[i]);
        if(mx-mn>2*x){
            res++;
            mn=mx=a[i];
        }
    }
    cout<<res<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){solve();}
    return 0;
}
