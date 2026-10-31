#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n,m;
    string a,b;
    cin>>n>>m>>a>>b;
    for(int i=0;i<(int)a.size();i++){
        size_t pos=b.find(a[i]);
        if(pos!=string::npos){
            b.erase(pos,1);
            a.erase(i,1);
            i--;
        }
    }
    sort(a.begin(),a.end());
    if(b.empty()&&a=="isx")cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
