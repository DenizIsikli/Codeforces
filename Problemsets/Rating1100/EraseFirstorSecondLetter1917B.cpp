#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n;
    string s;
    cin>>n>>s;
    set<char>st;
    int ans=0;
    for(char c:s)st.insert(c),ans+=st.size();
    cout<<ans<<endl;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
