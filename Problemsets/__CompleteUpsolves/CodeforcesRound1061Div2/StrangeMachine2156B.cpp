#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;

void solve() {
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    vector<int>a(q);
    for(int i=0;i<q;i++)cin>>a[i];
    int A=count(s.begin(),s.end(),'A');
    int B=count(s.begin(),s.end(),'B');
    for(int i=0;i<q;i++){
        int x=a[i];
        if(B==0){
            cout<<x<<endl;
            continue;
        }
        long long ans=0;
        while(x>0){
            for(char c:s){
                if(x==0)break;
                ans++;
                if(c=='A')x--;
                else x/=2;
            }
        }
        cout<<ans<<endl;
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

