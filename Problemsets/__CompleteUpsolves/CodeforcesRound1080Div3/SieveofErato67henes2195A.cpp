#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    int f=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==67)f=1;
    }
    cout<<(f?"YES":"NO")<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){solve();}
    return 0;
}
