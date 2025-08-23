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
    int n;
    cin>>n;
    string a;
    cin>>a;
    int m;
    cin>>m;
    string b,c;
    cin>>b>>c;
    for(int i=0;i<m;i++){
        if(c[i]=='D')a.push_back(b[i]);
        else a.insert(a.begin(),b[i]);
    }
    cout<<a<<endl;
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

