#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;
    string s;
    cin>>n>>s;
    stack<int>st;
    vector<int>v;
    for(int i=0;i<n;i++){
        if(s[i]=='1')st.push(i+1);
        if(s[i]=='2'&&!st.empty()){
            st.pop();
            v.push_back(i+1);
        }
    }
    while(!st.empty()){
        v.push_back(st.top());
        st.pop();
    }
    sort(v.begin(),v.end());
    cout<<v.size()<<endl;
    for(int x:v)cout<<x<<" ";
    cout<<endl;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
