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
    int n;cin>>n;
    n=n-n % 10+(n%10+1)%10;
    while(n>9) {
    if(n%10==0) {
      cout<<"NO\n";
      return;
    }
    n/=10;
    }
    cout<<(n==1?"YES\n":"NO\n");
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

