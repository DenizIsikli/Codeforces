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
    int n,k;
    cin>>n>>k;
    int ans=0,cnt=0;
    while(n--){
        int x;
        cin>>x;
        if(!x)cnt++;
        else{
            ans+=(cnt+1)/(k+1),cnt=0;
        }
    }
    ans+=(cnt+1)/(k+1),cnt=0;
    cout<<ans<<endl;
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

