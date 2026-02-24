#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int x,y;
    cin>>x>>y;
    if(y==0){
        if(x%3!=0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        return;
    }else if(y>0){
        int rem=x-(2*y);
        if(rem<0||rem%3!=0){
            cout<<"NO"<<endl;
            return;
        }
    }else{
        int rem=x-(4*abs(y));
        if(rem<0||rem%3!=0){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){solve();}
    return 0;
}
