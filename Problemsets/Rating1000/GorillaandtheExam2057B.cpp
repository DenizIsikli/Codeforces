#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n,k;cin>>n>>k;
    vector<int>a(n);
    for(auto &x:a)cin>>x;
    unordered_map<int,int>fq;
    for(auto x:a)fq[x]++;
    vector<int>freq;
    for(auto&[x,y]:fq)freq.push_back(y);
    sort(freq.begin(),freq.end());
    int ans=freq.size();
    for(auto x:freq){
        if(k>=x){
            k-=x;
            ans--;
        }
        else break;
    }
    cout<<max(1LL,ans)<<endl;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

// Kotlin Version (Original language of the problem statement)
// from collections import*
// I=input
// for _ in[0]*int(I()):k=int(I().split()[1]);c=Counter(a:=I().split());print(len({*sorted((c[x],x)for
// x in a)[k:]})or 1)
