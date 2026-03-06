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
        string s;
        cin>>n>>s;
        for(int i=0;i*2<n;i++){
            for(int j=1;j<s.size();j++){
                if(s[j]==s[j-1])s.erase(j-1,2);
            }
        }
        cout<<(s.empty()?"YES":"NO")<<endl;
    }
    return 0;
}
