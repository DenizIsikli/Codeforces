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

void solve(){
    int n,k,x;
    cin>>n>>k>>x;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    if(accumulate(a.begin(),a.end(),0ll)*k<x){
        cout<<0<<'\n';
        return;
    }
    int l=1,r=n*k;
    while(l<=r){
        int m=l+(r-l)/2;
        int cnt_a=(n*k-m+1)/n;
        int suff=(n*k-m+1)%n;
        long long sum=1ll*cnt_a*accumulate(a.begin(),a.end(),0ll);
        for(int i=n-suff;i<n;i++)sum+=a[i];
        if(sum<x){
            r=m-1;
        }else{
            l=m+1;
        }
    }
    cout<<r<<'\n';
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

