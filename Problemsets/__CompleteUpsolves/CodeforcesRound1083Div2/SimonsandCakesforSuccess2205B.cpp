#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
signed main(){
        ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=1;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                ans*=i;
                while(n%i==0)n/=i;
            }
        }
        if(n>1)ans*=n;
        cout<<ans<<endl;
    }
    return 0;
}
