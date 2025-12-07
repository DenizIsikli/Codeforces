#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    string s;
    cin>>s;
    int l=0,r=s.size()-1;
    while(l<s.size()&&s[l]=='<')l++;
    while(r>=0&&s[r]=='>')r--;
    if(r-l+1>=2)cout<<-1<<endl;
    else{
        int ans=max(l,(int)s.size()-r-1);
        if(r-l+1==1)ans++;
        cout<<ans<<endl;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
