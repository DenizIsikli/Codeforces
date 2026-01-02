#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int diff=a[1]-a[0];
    for(int i=2;i<n;i++){
        if(a[i]-a[i-1]!=diff){
            cout<<"NO"<<endl;
            return;
        }
    }
    for(int i=0;i<n;i++){
        a[i]=a[i]+(diff<0?diff*(n-i):-diff*(i+1));
    }
    cout<<(a[0]>=0&&a[0]%(n+1)==0?"YES":"NO")<<endl;
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
