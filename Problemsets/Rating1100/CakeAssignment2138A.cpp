#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;

void solve() {
    int k,x;cin>>k>>x;
    int kk=1ll<<k;
    if(!x||x==kk*2){cout<<-1<<endl;return;}
    vector<int>res;res.clear();
    int y=kk*2-x;
    while(kk!=x){
        if(x>y)res.push_back(2),x-=y,y*=2;
        else res.push_back(1),y-=x,x*=2;
    }
    cout<<res.size()<<endl;
    while(!res.empty())cout<<res.back()<<" ",res.pop_back();
    cout<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    std::cin>>t;

    while (t--) {
        solve();
    }

    return 0;
}

