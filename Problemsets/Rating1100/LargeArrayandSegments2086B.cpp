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

int n,k,x;
vector<int>a(n);

void solve() {
    cin>>n>>k>>x;
    for(int i=0;i<n;i++)cin>>a[i];
    if(accumulate(a.begin(),a.end(),0ll)*k<x){
        cout<<"NO"<<endl;
        return;
    }
    int l=1,r=n*k;
    while(l<=r){
        int m=l+(r-l)/2;
        int cnt_a=(n*k-m+1)/n;
        int suff=(n*k-m+1)%n;
        int sum=cnt_a*accumulate(a.begin(),a.end(),0ll);
        for(int i=n-suff;i<n;i++)sum+=a[i];
        if(sum<x)l=m+1;
        else r=m-1;
    }
    cout<<r<<endl;
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

