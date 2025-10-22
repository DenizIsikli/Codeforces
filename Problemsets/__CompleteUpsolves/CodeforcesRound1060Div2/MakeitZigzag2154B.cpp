#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;

const int N=200007;
int a[N],f[N];

void solve() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i],f[i]=max(f[i-1],a[i]);
    a[0]=a[n+1]=0x3f3f3f3f;
    for(int i=2;i<=n;i+=2)a[i]=f[i];
    int ans=0;
    for(int i=1;i<=n;i+=2)ans+=max(a[i]-min(a[i-1],a[i+1])+1,0ll);
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

