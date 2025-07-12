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
    for(auto&x:a)cin>>x;
    sort(a.begin(),a.end());
    int mx=-1,cnt=0;
    if(a[0]%2==a[a.size()-1]%2){
        cout<<0<<endl;
        return;
    }else{
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if((a[i]+a[j])%2==0){
                    mx=max(mx,j-i+1);
                }
            }
        }
        cout<<n-mx<<endl;
    }
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

