#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int a[100005];
int n,ans;

void solve() {
    cin>>n;
    ans=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]>0&&a[i-1]==0)ans++;
    }
    cout<<min(ans,2)<<endl;
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
