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
    char c;
    string s;
    cin>>n>>c>>s;
    s+=s;
    int ans=0,gr=0;
    for(int i=s.size();i>0;i--){
        if(s[i]=='g')gr=i;
        if(s[i]==c)ans=max(ans,gr-i);
    }
    cout<<ans<<endl;
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

