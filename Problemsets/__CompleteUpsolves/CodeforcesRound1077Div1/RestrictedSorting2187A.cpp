#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n),b;
    for(int&i:a)cin>>i;
    b=a;
    sort(b.begin(),b.end());
    if(a==b){
        cout<<-1<<endl;
        return;
    }
    int mn=b[0],mx=b.back();
    int ans=LLONG_MAX;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            ans=min(ans,max(a[i]-mn,mx-a[i]));
        }
    }
    cout<<ans<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){solve();}
    return 0;
}
