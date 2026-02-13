#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n),b(n),pos(n+1);
    for(int i=0;i<n;i++){cin>>b[i];pos[b[i]]=i;}
    cin>>a[0];
    int flag=1;
    for(int i=1;i<n;i++){cin>>a[i];if(pos[a[i-1]]>pos[a[i]]){flag=0;}}
    cout<<(flag?"Yes":"No")<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){solve();}
    return 0;
}
