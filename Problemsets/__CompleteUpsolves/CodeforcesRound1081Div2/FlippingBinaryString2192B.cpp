#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;
    string s;
    cin>>n>>s;
    vector<int>a,b;
    for(int i=0;i<n;i++){
        (s[i]=='1'?a:b).push_back(i+1);
    }
    if(a.size()%2==0){
        cout<<a.size()<<endl;
        for(int x:a)cout<<x<<' ';
        cout<<endl;
    }else if(b.size()%2==1){
        cout<<b.size()<<endl;
        for(int x:b)cout<<x<<' ';
        cout<<endl;
    }else{cout<<-1<<endl;}
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){solve();}
    return 0;
}
