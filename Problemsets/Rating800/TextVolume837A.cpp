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
    int n,mx=0;
    string s;
    cin>>n;
    while(cin>>s){
        int l=0;
        for(int i=0;i<s.size();i++){
            if(s[i]<'a')l++;
            mx=max(mx,l);
        }
    }
    cout<<mx<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}

