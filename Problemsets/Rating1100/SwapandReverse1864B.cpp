#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n,k;
    string s;
    cin>>n>>k>>s;
    if(k%2==0){
        sort(s.begin(),s.end());
        cout<<s<<endl;
        return;
    }
    vector<char>e,o;
    for(int i=0;i<n;i++)(i%2?o:e).push_back(s[i]);
    sort(e.begin(),e.end());
    sort(o.begin(),o.end());
    string ans;
    for(int i=0;i<e.size()||i<o.size();i++){
        if(i<e.size())ans+=e[i];
        if(i<o.size())ans+=o[i];
    }
    cout<<ans<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--)solve();
    return 0;
}
