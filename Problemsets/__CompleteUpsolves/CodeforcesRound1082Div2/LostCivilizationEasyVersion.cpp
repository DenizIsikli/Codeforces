#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    stack<int>s;
    for(int i=n-1;i>=0;i--){
        while(s.size()&&a[i]+1==s.top())s.pop();
        s.push(a[i]);
    }
    cout<<s.size()<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){solve();}
    return 0;
}
