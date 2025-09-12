#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;

void solve() {
    int a,b;
    cin>>a>>b;
    if(a==b){
        cout<<0<<endl;
        return;
    }
    int lcm=(a*b)/__gcd(a,b);
    if(lcm==a||lcm==b){
        cout<<1<<endl;
        return;
    }else{
        cout<<2<<endl;
        return;
    }
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

