#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;
    string s;
    cin>>n>>s;
    int c=0;
    for(int i=0;i<n-1;i++)if(s[i]!=s[i+1])c++;
    cout<<(c==1?2:1)<<endl;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
