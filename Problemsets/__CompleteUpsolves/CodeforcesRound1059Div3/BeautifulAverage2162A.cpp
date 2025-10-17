#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto&x:a)cin>>x;
    sort(a.begin(),a.end());
    int ans=a[a.size()-1];
    int cnt=1;
    for(int i=a.size()-2;i>=0;i--){
        if((ans+a[i])/(cnt+1)>=ans/cnt){
            ans+=a[i];
            cnt++;
        }
        else break;
    }
    cout<<ans/cnt<<endl;
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

