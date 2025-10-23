#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;

void solve() {
    int n;cin>>n;
    vector<int>a;
    int odd=0,x,sum=0,ans=0;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x&1){
            a.push_back(x);
            odd++;
        }else{sum+=x;}
    }
    if(odd)ans+=sum;
    sort(a.rbegin(),a.rend());
    for(int i=0;i<(int)(a.size()+1)/2;i++)ans+=a[i];
    cout<<ans<<endl;
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

