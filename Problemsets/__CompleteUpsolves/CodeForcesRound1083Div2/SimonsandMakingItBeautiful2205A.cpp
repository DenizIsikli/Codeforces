#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int a[505];
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==n)swap(a[1],a[i]);
        }
        for(int i = 1; i <= n; i++) printf("%d ", a[i]); puts("");
    }
    return 0;
}
