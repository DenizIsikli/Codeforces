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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int v1=max(3*a/10,a-a/250*c);
    int v2=max(3*b/10,b-b/250*d);
    cout<<(v1>v2?"Misha":(v2>v1?"Vasya":"Tie"));
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}

