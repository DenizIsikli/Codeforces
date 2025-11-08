#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

int b[100005],a[100005],i;

void solve(){
    int n;
    cin>>n;
    for(int i=1;i<n;i++)cin>>b[i];
    b[0]=b[n]=0;
    for(i=1;i<=n;i++)a[i]=b[i-1]|b[i];
    for(i=1;i<n&&(a[i]&a[i+1])==b[i];i++);
    if(i<n)cout<<-1<<endl;
    else{
        for(int i=1;i<=n;i++)cout<<a[i]<<" ";
        cout<<endl;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
