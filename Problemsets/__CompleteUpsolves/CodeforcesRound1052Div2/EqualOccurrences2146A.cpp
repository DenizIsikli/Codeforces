#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;

int a[101];

void solve() {
    int n,x,ans=0;
    cin>>n;
    for(int i=0;i<=n;i++)a[i]=0;
    for(int i=0;i<n;i++){
        cin>>x;
        a[x]++;
    }
    sort(a+1,a+n+1,greater<int>());
    for(int i=1;i<=n;i++)ans=max(ans,a[i]*i);
    cout<<ans<<endl;
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

