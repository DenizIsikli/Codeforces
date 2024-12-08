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
#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define int long long

const int MAX_INT = 1e9;
const int MIN_INT = -1e9;

template<typename T>
void read_vector(std::vector<T> &vec) {
    for (T &val : vec) std::cin >> val;
}

const int N = 3e5+10;
int a[N];

void solve() {
    int n;
    cin >> n;
    int sum1 = 0, sum2 = 0, sum = 0;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (i%2) sum1 += a[i];
        else sum2 += a[i];
        sum += a[i];
    }
    
    if (sum%n==0) {
        int odds = (n+1)/2;
        int evens = n-odds;
        sum/=n;
        if (sum1==odds*sum && sum2==evens*sum) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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

