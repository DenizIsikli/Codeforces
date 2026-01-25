#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;

void solve() {
    int n;
    cin>>n;
    int mn=1e9;
    for(int i=1;i<=34;i++){
        if(3*i>=n){
            mn=min(mn,abs(3*i-n));
            break;
        }
    }
    cout<<mn<<endl;
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

