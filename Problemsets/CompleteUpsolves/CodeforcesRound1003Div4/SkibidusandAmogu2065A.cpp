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

using namespace std;

void solve() {
    string s;
    cin >> s;
    if (s[s.size()-1] == 's' && s[s.size()-2] == 'u') {
        s.pop_back();
        s.pop_back();
        s+='i';
    } else if (s[s.size()-1] == 'i') {
        s.pop_back();
        s+='u';
        s+='s';
    }
    cout << s << endl;
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

