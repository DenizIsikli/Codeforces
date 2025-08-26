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
#include<bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;

int n,ans=0;

void solve() {
    cin>>n;
    ans=0;
    for(int i=0;i<=19;i++){
        int cnt=n%3;
        ans+=cnt*(pow(3,i+1)+i*pow(3,i-1));
        n/=3;
    }
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

