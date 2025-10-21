#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;

void solve() {
    int a,b;
    cin>>a>>b;
    if(__builtin_clz(a)>__builtin_clz(b))cout<<"-1\n";
    else if(a==b)cout<<"0\n";
    else{
        vector<int>val;
        for(int i = 0; i < 31; i++){
            int x = (1 << i);
            if(x <= a && (a & x) == 0) a += x, val.push_back(x);
        }
        for(int i = 0; i < 31; i++){
            int x = (1 << i);
            if(x <= a && (b & x) == 0) val.push_back(x);
        }
        cout << val.size() << '\n';
        for(auto z : val) cout << z << ' ';
        cout << '\n';
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

