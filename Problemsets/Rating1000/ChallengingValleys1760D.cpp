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
    cin >> n;
    vector<int> a;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if(i == 0 || x != a.back()){
            a.push_back(x);
        }
    }
    int num_valley = 0;
    for(int i = 0; i < a.size(); i++) {
        if((i == 0 || a[i-1] > a[i]) && (i == a.size()-1 || a[i] < a[i+1])) {
            num_valley++;
        }
    }
    if(num_valley == 1) { cout << "YES" << endl; }
    else { cout << "NO" << endl; }
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

