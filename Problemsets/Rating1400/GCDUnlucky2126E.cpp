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
    vector<int>a(n),b(n);
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i];
    bool f=1;
    if(a[n]!=b[1]){
        cout<<"NO"<<endl;
        return;
    }
    for(int i=1;i<n;i++){
        if(a[i]%a[i+1]!=0)f=0;
        if(b[i+1]%b[i]!=0)f=0;
    }
    for(int i=1;i<n;i++){
        if(__gcd(a[i],b[i+1])!=a[n])f=0;
    }
    if(f==0){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
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

