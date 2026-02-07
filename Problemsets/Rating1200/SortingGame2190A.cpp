#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string sorted=s;
    sort(sorted.begin(),sorted.end());
    if(sorted==s){
        cout<<"Bob"<<endl;
        return;
    }
    vector<int>idx;
    for(int i=0;i<s.size();i++){
        if(s[i]!=sorted[i])idx.push_back(i+1);
    }
    cout<<"Alice"<<endl;
    cout<<idx.size()<<endl;
    for(auto&i:idx)cout<<i<<" ";
    cout<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){solve();}
    return 0;
}
