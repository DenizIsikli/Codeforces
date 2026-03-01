#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int s,m;cin>>s>>m;
        if((s&-s)<(m&-m)){
            cout<<-1<<endl;
            continue;
        }
        int ans=0;
        for(int i=1;i<=61;i++){
            int msk=(1LL<<i)-1;
            int s_=s&msk,m_=m&msk;
            if(m_)ans=max(ans,(s_+m_-1)/m_);
        }
        cout<<ans<<endl;
    }
    return 0;
}
