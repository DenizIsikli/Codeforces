#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int l=1,r=n;
    vector<int>a(n);
    for(int i=n-2;i>=0;i--){
        if(s[i]=='<')a[i+1]=l++;
        if(s[i]=='>')a[i+1]=r--;
    }
    a[0]=l;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
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
