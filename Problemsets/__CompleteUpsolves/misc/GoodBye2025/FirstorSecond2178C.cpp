#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    int sum=0;
    int ans=LLONG_MIN;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        sum+=-a[i];
    }
    sum+=a[0];
    ans=sum;
    int cur=a[0];
    for(int i=1;i<n;i++) {
        sum+=a[i];
        ans=max(ans, sum + cur);
        cur+=abs(a[i]);
    }
    cout<<ans<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
