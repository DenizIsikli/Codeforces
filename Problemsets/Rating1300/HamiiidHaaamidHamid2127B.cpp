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
    int n,x;
    string s;
    cin>>n>>x>>s;
    if(x==1||x==n){
        cout<<1<<endl;
        return;
    }
    x--;
    int inf=1e9;
    int ls=-inf,rg=inf;
    for(int i=x-1;i>=0;i--){
        if(s[i]=='#'){
            ls=i;
            break;
        }
    }
    for(int i=x+1;i<n;i++){
        if(s[i]=='#'){
            rg=i;
            break;
        }
    }
    if(ls==-inf&&rg==inf){
        cout<<1<<endl;
        return;
    }
    cout<<max(min(x+1,n-rg+1),min(ls+2,n-x))<<endl;
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

