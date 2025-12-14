#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n,s;
string a;

void solve(){
    cin>>n>>a;s=0;while(n&&a[n-1]=='A')n--;
    while(s<=a.size()-1&&a[s]=='B')s++;
    cout<<max(n-s-1,0)<<endl;
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
