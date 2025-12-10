#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n,k;
    string s;
    cin>>n>>k>>s;
    int ans=0;
    int lastIdx=-1;
    for(int i=0;i<n;i++){
        if(s[i]=='1')lastIdx=i;
        else{
            if(lastIdx==-1){ans++;}
            else if(i-lastIdx>k){ans++;}
        }
    }
    cout<<ans<<endl;
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
