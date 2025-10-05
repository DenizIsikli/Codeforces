#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;

int get(vector<int>x){
    if(x.empty())return 0;
    int pos=(int)x.size()/2,val=0;
    for(int i=0;i<x.size();i++){
        val+=abs(x[pos]-x[i])-abs(pos-i);
    }
    return val;
}

void solve() {
    int n;
    cin>>n;
    vector<int>a,b;
    for(int i=1;i<=n;i++){
        char c;
        cin>>c;
        if(c=='a')a.push_back(i);
        else b.push_back(i);
    }
    cout<<min(get(a),get(b))<<endl;
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

