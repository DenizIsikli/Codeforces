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

using namespace std;

void solve() {
    int k;
    cin>>k;
    string s,ans ="";
    cin>>s;
    map<char,int>m;
    for (char c : s) m[c]++;   
    for (auto it : m){
        if(it.second%k!=0) {
            cout<<-1<<endl;
            return;
        }
        ans+=string(it.second/k,it.first);
    }  
    while(k--) cout<<ans;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}

