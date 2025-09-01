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

int n,a[200005],opt;

void solve() {
    cin>>n;
    a[n+1]=opt=0;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=2;i<=n;i+=2){
        if(a[i]<a[i+1]+a[i-1]){
            opt+=a[i+1]+a[i-1]-a[i];
            a[i+1]=max(a[i]-a[i-1],(int)0);
        }
    }
    cout<<opt<<endl;
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

