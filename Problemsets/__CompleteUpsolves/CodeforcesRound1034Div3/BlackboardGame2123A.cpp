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
    vector<int>cnt(4);
    for(int i=0;i<n;i++)cnt[i%4]++;
    cout<<(cnt[0]==cnt[3]&&cnt[1]==cnt[2]?"Bob":"Alice")<<endl;
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

