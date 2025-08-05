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
    int opt=0;
    vector<int>a(n),b(n);
    vector<string>output;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    for(int i=0;i<n;i++){
        if(a[i]>b[i]){
            output.push_back("3 "+to_string(i+1));
            swap(a[i],b[i]);
            opt++;
        }
    }
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            output.push_back("1 "+to_string(i+1));
            swap(a[i],a[i+1]);
            opt++;
            i=-1;
        }
    }
    for(int i=0;i<n-1;i++){
        if(b[i]>b[i+1]){
            output.push_back("2 "+to_string(i+1));
            swap(b[i],b[i+1]);
            opt++;
            i=-1;
        }
    }
    cout<<opt<<endl;
    for(const auto&s:output){
        cout<<s<<endl;
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

