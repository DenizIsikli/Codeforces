#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <cmath>
#include <unordered_map>
#include <unordered_set>
#include <numeric>
#include <functional>

#define int long long
#define endl '\n'

using namespace std;

void solve() {
    int t;cin>>t;while(t--){
    int n,m;cin>>n>>m;
    string x,s;cin>>x>>s;int i=0;
    for(i=0;i<=5;i++){
        if(x.find(s)!=string::npos){
            cout<<i<<endl;break;
        }x+=x;}
        if(i>5)cout<<"-1"<<endl;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

