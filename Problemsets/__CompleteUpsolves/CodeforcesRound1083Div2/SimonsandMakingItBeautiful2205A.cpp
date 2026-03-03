#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==n)swap(a[0],a[i]);
        }
        for(int i=0;i<n;i++)cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}
