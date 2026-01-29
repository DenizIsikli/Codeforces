#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;
    cin>>n;
    int v=(n+1)/2;
    cout<<v;
    for(int i=1;i<n;i++){
        if(i&1)v+=i;
        else v-=i;
        cout<<" "<<v;
    }
    cout<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){solve();}
    return 0;
}
