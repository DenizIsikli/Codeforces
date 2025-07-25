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
    char sx,sy,fx,fy;
    cin>>sx>>sy>>fx>>fy;
    int q,d1=(int)fx-(int)sx,d2=(fy-'0')-(sy-'0');
    q=max(abs(d1),abs(d2));
    cout<<q<<endl;
    for(int i=1;i<=q;i++){
        if(d1 > 0){cout << 'R';d1--;}
        if(d1 < 0){cout << 'L';d1++;}
        if(d2 < 0){cout << 'D';d2++;}
        if(d2 > 0){cout << 'U';d2--;}
        cout<<endl;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}

