#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;

int a[200010];

void solve() {
    int n;
    cin>>n;
    int cnt=0;
    int sm=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];cnt+=(a[i]==0);sm+=a[i];
    }
    if(cnt==1){
        for(int i=1;i<=n;i++){
            if(!a[i]){
                a[i]=n*(n+1)/2-sm;
            }
        }
    }
    int p=1,q=n;
    while(p<=n&&a[p]==p)p++;
    while(q<=n&&a[q]==q)q--;
    cout<<max(0ll,q-p+1)<<endl;
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

