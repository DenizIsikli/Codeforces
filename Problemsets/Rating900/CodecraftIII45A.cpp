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
    string a, m[12]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int k; cin>>a>>k;
    for (int i=0; i<12; i++) {
        if (m[i]==a) {cout<<m[(i+k)%12];}
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}

