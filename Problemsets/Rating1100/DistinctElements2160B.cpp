#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

const int N = 2e5+5;
int a[N],b[N],ans,x,l;

void solve(){
    int n;
    cin>>n;
    l=0;
    for(int i=1;i<=n;i++){
        cin>>b[i];
        x=b[i]-b[i-1];
        if(x==i)a[i]=++l;
        else a[i]=a[i-x];
        cout<<a[i]<<" ";
    }
    cout<<endl;
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
