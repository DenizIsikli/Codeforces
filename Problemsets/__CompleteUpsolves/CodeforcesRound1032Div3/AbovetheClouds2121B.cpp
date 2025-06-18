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
    string s;
    cin>>n>>s;
    int cnt[26]={};
    for (char &c:s) cnt[c-'a']++;
    bool ok=false;
    for (int i=1;i<n-1;i++) {
        if (cnt[s[i]-'a']>=2)ok=true;
    }
    cout<<(ok?"YES":"NO")<<endl;
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

