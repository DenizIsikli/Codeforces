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
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        if(abs(a[i]-a[i-1])<=1){
            cout<<0<<endl;
            return;
        }
    }
    for(int i=1;i<n-1;i++){
        if(a[i-1]<a[i]&&a[i]>a[i+1]){
            cout<<1<<endl;
            return;
        }
        if(a[i-1]>a[i]&&a[i]<a[i+1]){
            cout<<1<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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

