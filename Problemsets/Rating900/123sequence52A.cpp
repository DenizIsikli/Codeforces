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
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a) cin >> i;
    map<int, int> fq;
    for (auto i : a) fq[i]++;
    int mxVal=0, mxKey=0;
    for (auto [key, val] : fq) {
        if (val > mxVal) {
            mxVal = val;
            mxKey = key;
        }
    }
    int sum = 0;
    for (auto [key, val] : fq) {
        if (key==mxKey) continue;
        sum += val;
    }
    cout << sum << '\n';
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}

