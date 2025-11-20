#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n,d;
    int cnt=0;
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n-1;i++){
        if(abs(a[i]-a[i+1])>2*d)cnt+=2;
        else if(abs(a[i]-a[i+1])==2*d)cnt++;
    }
    cout<<cnt+2<<endl;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
