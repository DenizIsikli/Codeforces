#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s="";
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        if(i==0)s=a;
        else{
            string opt1=a+s;
            string opt2=s+a;
            s=min(opt1,opt2);
        }
    }
    cout<<s<<endl;
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
