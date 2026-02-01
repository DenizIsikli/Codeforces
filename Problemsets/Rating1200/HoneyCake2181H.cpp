#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int w,h,d,n;
    cin>>w>>h>>d>>n;
    int x,y,z;
    x=gcd(n,w);
    y=gcd(n/x,h);
    z=gcd(n/(x*y),d);
    if(x*y*z==n)cout<<x-1<<" "<<y-1<<" "<<z-1;
    else cout<<-1;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}

