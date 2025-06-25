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
    string a,b;
    cin>>a>>b;
    int ans=a.size()+b.size();
    while(a.size()&&b.size()&&a.back()==b.back()) {
        ans-=2;
        a.pop_back();
        b.pop_back();
    }
    cout<<ans<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}

