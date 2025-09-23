#include <bits/stdc++.h>
#include <numeric>

#define int long long
#define endl '\n'

using namespace std;

int a[200010],b[200010];

void solve() {
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=k;i++)cin>>b[i];
    sort(a+1,a+n+1);
    sort(b+1,b+k+1);
    int sm=0;
    for(int i=1;i<=n;i++)sm+=a[i];
    int pos=n+1;
    for(int i=1;i<=k;i++){
        pos-=b[i];
        if(pos>=1){
            sm-=a[pos];
        }
    }
    cout<<sm<<endl;
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

