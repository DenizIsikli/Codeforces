#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n,x,y,a,b;
string s;

void solve(){
    cin>>n>>x>>y>>s;a=b=0;
    for(int i=1;i<=20;i++){
        for(char&c:s){
            if(a==x&&b==y){
                cout<<"Yes"<<endl;
                return;
            }
            if(c=='E')a++;
            if(c=='W')a--;
            if(c=='N')b++;
            if(c=='S')b--;
        }
    }
    cout<<"No"<<endl;
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
