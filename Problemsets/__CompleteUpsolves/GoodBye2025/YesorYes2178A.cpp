#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    string s;
    cin>>s;
    int se=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='Y'){
            if(se==1){
                cout<<"NO"<<endl;
                return;
            }
            se=1;
        }
    }
    cout<<"YES"<<endl;
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
