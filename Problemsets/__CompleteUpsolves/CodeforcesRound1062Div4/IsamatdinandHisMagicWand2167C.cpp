#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    bool contains_odd=false,contains_even=false;
    for(int i=0;i<n;i++){
        if(a[i]%2==0)contains_even=true;
        else contains_odd=true;
    }
    if(contains_odd && contains_even){
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++)cout<<a[i]<<" ";
        cout<<endl;
    }else{
        for(int i=0;i<n;i++)cout<<a[i]<<" ";
        cout<<endl;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

