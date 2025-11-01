#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int st=0,fl=1;
    a.push_back(0);
    vector<int>b(n);
    for(int i=1;i<n+1;i++){
        if(a[st]==a[i])b[i-1]=i;
        else{
            if(i-st==1){fl=0;break;}
            b[i-1]=st;st=i;
        }
    }
    if(fl){for(int i=0;i<n;i++)cout<<b[i]+1<<" ";cout<<endl;}
    else{
        cout<<-1;
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
