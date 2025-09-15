#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;

int a[15],b[15];

void solve() {
    int n,m,x,y;
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=m;i++)cin>>b[i];
    sort(a+1,a+n+1);
    sort(b+1,b+m+1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i]==b[j]){
                cout<<a[i]<<endl;
                return;
            }
        }
    }
    cout<<min(a[1],b[1])<<max(a[1],b[1])<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}

