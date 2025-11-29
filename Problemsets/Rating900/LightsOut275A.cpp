#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int a[5][5];
    for(int i=1;i<4;i++){
        for(int j=1;j<4;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<4;i++){
        for(int j=1;j<4;j++){
            cout<<!((a[i][j]+a[i+1][j]+a[i-1][j]+a[i][j+1]+a[i][j-1])%2);
        }
        cout<<endl;
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
