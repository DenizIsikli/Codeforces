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

const int N=200010;
char a[3][N];

void solve() {
    int n;
    cin>>n;
    for(int i=1;i<=2;i++) {
        for(int j=1;j<=n;j++) {
            cin>>a[i][j];
        }
    }
    int max_down=n,min_down=1;
    for(int i=n;i>=2;i--){
        if(a[1][i]=='1'&&a[2][i-1]=='0')max_down=i-1;
    }
    for(int i=1;i<max_down;i++){
        if(a[2][i]=='1'&&a[1][i+1]=='0')min_down=i+1;
    }
    for(int i=1;i<=max_down;i++)cout<<a[1][i];
    for(int i=max_down;i<=n;i++)cout<<a[2][i];
    cout<<endl;
    cout<<max_down-min_down+1<<endl;
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

