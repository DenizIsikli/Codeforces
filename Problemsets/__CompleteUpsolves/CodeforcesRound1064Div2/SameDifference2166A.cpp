#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    char lst=s[n-1];
    for(int i=0;i<s.size()-1;i++){
        if(s[i]!=lst)ans++;
    }
    cout<<ans<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
