#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;

int n;
pair<int,int>cntOne,cntZero;
vector<vector<int>>a(n,vector<int>(n));

pair<int,int> f(vector<int>v){
    int cnt1=0,cnt0=0;
    for(auto x:v){
        if(x==1)cnt1++;
        else cnt0++;
    }
    return {cnt1,cnt0};
}

void solve() {
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x;cin>>x;
            a[i][j]=x;
        }
    }
    int ans=0;
    for(int i=0;i<n/2;i++){

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

