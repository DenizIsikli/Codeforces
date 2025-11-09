#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n,m;cin>>n>>m;
    vector<vector<int>>a(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char c;cin>>c;a[i][j]=c-'0';
        }
    }
    bool f=true;
    for(int i=n-1;i>=0&&f;i--){
        for(int j=m-1;j>=0&&f;j--){
            if(a[i][j]==1){
                bool row_ok=true,col_ok=true;
                for(int k=0;k<=j;k++){
                    if(a[i][k]==0){row_ok=false;break;}
                }
                for(int k=0;k<=i;k++){
                    if(a[k][j]==0){col_ok=false;break;}
                }
                if(!row_ok&&!col_ok)f=false;
            }
        }
    }
    cout<<(f?"YES":"NO")<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
