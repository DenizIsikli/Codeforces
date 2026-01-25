#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;

void solve() {
    int n,k;
    string s;
    cin>>n>>k>>s;
    int a=count(s.begin(),s.end(),'0');
    int b=count(s.begin(),s.end(),'1');
    int c=count(s.begin(),s.end(),'2');
    string ans(n,'+');
    for(int i=0;i<n;i++){
        if(i<a+c||i>=n-b-c)ans[i]='?';
        if(i<a||i>=n-b||k==n)ans[i]='-';
    }
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

