#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;

int a[101];

void solve() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    int l=1,r=n;
    for(int i=1;i<=n;i++){
        if(a[l]==i)l++;
        else if(a[r]==i)r--;
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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

