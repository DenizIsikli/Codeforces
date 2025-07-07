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
    string s;
    cin>>s;
    int idx=-1;
    for(int i=0;i+1<s.size();i++){
        if(s[i]==s[i+1]){
            idx=i;
            break;
        }
    }
    if(idx==-1){
        if(s.back()=='a')cout<<(s+"b")<<endl;
        else cout<<(s+"a")<<endl;
    }else{
        string t="a";
        if(s[idx]=='a')t="b";
        cout<<s.substr(0,idx+1)+t+s.substr(idx+1)<<endl;
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

