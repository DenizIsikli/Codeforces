#include<bits/stdc++.h>
using namespace std;
int n,a[100005],t;
int main(){
    cin>>t;
    while(t--)
    {
        cin>>n;
        int g=0;
        for(int i = 1;i<=n;++i)
            cin>>a[i],g=__gcd(g,a[i]);
        cout<<a[n]/g<<"\n";
    }
}
