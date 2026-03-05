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
        vector<int>a(n),b;
        for(int i=0;i<n;i++)cin>>a[i];
        if(is_sorted(a.begin(),a.end()))cout<<n<<endl;
        else cout<<1<<endl;
    }
    return 0;
}
