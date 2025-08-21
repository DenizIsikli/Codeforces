#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
ll m=INT_MAX,s;

int main(){
    ll n,a;
    cin>>n;
    while(n--){
        cin>>a;s+=a;
        if(a<m&&a%2==1)m=a;
    }
    cout<<(s%2==0?s:s-m);
    return 0;
}
