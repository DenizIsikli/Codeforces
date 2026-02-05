#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n),b(n),c(n);
    for(int&i:a)cin>>i;
    for(int&i:b)cin>>i;
    for(int&i:c)cin>>i;
    int x=0,y=0;
    for(int i=0;i<n;i++){
        int add=1;
        for(int j=0;j<n;j++){
            if(a[j]>=b[(i+j)%n]){add=0;break;}
        }
        x+=add;
    }
    for(int i=0;i<n;i++){
        int add=1;
        for(int j=0;j<n;j++){
            if(b[j]>=c[(i+j)%n]){add=0;break;}
        }
        y+=add;
    }
    cout<<n*x*y<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){solve();}
    return 0;
}
