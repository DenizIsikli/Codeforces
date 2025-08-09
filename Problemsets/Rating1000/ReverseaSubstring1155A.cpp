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
    string s;
    cin>>n>>s;
    for(int i=1;i<s.size();i++) {
        if(s[i]<s[i-1]){
            cout<<"YES"<<endl;
            cout<<i<<" "<<i+1<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}

