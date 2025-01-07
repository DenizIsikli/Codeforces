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

using namespace std;
using vi = std::vector<int>;

// #define int long long

const int MAX_INT = 1e9;
const int MIN_INT = -1e9;

template<typename T>
void read_vector(std::vector<T> &vec) {
    for (T &val : vec) std::cin >> val;
}

int t,n,x;bool f[200005];

void solve() {
    int n;

    cin>>n;
    for(int i=1;i<=n;++i)f[i]=0;
    for(int i=1;i<=n;++i){
        cin>>x;
        if(!f[x]){
            f[x]=1;
            cout<<x<<' ';
        }
    }
    for(int i=1;i<=n;++i){
        if(!f[i])cout<<i<<' ';
    }
    cout<<endl;
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

