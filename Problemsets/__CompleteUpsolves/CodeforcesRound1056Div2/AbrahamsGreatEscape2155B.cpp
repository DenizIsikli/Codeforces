#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;
    int rem=(n*n)-k;
    if(k==n*n-1){
        cout<<"NO"<<endl;return;
    }else{
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            string s="";
            for(int j=0;j<n;j++){
                if(k>0){
                    s+="U";
                    k--;
                }else if(i==n-1&&j==n-1){
                    s+="L";
                }else if(i==n-1){
                    s+="R";
                }else{s+="D";}
            }
            cout<<s<<endl;
        }
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

