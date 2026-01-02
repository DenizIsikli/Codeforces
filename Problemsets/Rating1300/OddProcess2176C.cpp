#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>e,o;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x%2==0)e.push_back(x);
        else o.push_back(x);
    }
    sort(e.begin(),e.end());
    sort(o.begin(),o.end());
    int sm=0;
    for(int k=1;k<=n;k++){
        if(o.empty())cout<<0;
        else if(e.empty())cout<<(k%2==1?o.back():0);
        else{
            if(k<=e.size()+1){
                if(k==1)sm+=o.back();
                else sm+=e[e.size()-(k-1)];
                cout<<sm;
            }
            else if((k-e.size())%2==1)cout<<sm;
            else if(k<n)cout<<sm-e[0];
            else cout<<0;
        }
        cout<<(k==n?'\n':' ');
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
