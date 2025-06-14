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

const int maxn=105;
int n,arr[maxn];

void solve() {
    cin>>n;
    for(int i=1;i<=n;i++) {
        cin>>arr[i];
    }

    int ans=0;
    for(int i=1;i<=n;i++) {
        int add=1;
        for(int j=1;j<i;j++) {
            if(arr[j]==arr[i]) {
                add=0;
            }
        }
        ans+=add;
    }
    cout<<ans<<"\n";
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

