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

using namespace std;
using vi = std::vector<int>;

#define int long long

const int MAX_INT = 1e9;
const int MIN_INT = -1e9;

template<typename T>
void read_vector(std::vector<T> &vec) {
    for (T &val : vec) std::cin >> val;
}

void solve() {
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++) {
        if (s[i]=='p') s[i]='q';
        else if (s[i]=='q') s[i]='p';
        else continue;
    }
    cout << s << '\n';
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

