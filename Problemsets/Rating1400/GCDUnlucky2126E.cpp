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

auto lcm = [](int a, int b) {
    return (a / __gcd(a, b)) * b;
}; 

void solve() {
    int n;
    cin>>n;
    int a[n+1];
    int b[n+1];
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i];
    int ans[n+1];
    for(int i=n;i>=1;i--){
        ans[i]=lcm(a[i],b[i]);
    }
    bool ch=1;
    if(ans[1]!=a[1])ch=0;
    if(ans[n]!=b[n])ch=0;
    for(int i=2;i<=n;i++){
        if(__gcd(a[i-1],ans[i])!=a[i])ch=0;
    }
    for(int i=n-1;i>=1;i--){
        if(__gcd(b[i+1],ans[i])!=b[i])ch=0;
    }
    if(ch)cout<< "YES" << endl;
    else cout << "NO" << endl; 
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

