#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>a(n),cnt(k,0);
    int kk=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==k)kk++;
        if(a[i]<k)cnt[a[i]]++;
    }
    int ans=0;
    for(int i=0;i<k;i++){
        if(!cnt[i]){
            ans++;
        }
    }
    cout<<max(ans,kk)<<endl;
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

