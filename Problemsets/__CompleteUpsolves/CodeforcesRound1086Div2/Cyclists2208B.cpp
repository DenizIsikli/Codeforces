#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int N,K,P,M;cin>>N>>K>>P>>M;
    vector<int>A(N);
    for(int i=0;i<N;i++)cin>>A[i];
    if(P>K){
        sort(A.begin(),A.begin()+P-1);
        for(int i=0;i<P-K;i++)M-=A[i];
    }
    int p=A[P-1];
    A[P-1]=1e9;
    sort(A.begin(),A.end());
    int need=p;
    for(int i=0;i<N-K;i++)need+=A[i];
    M-=p;
    if(M<0)cout<<0<<endl;
    else cout<<1+M/need<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
