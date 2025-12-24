#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)cin>>a[i];
	int sum=0;
	for(int i=2;i<=n;i++)sum+=abs(a[i]-a[i-1]);
	int ans=min(sum-abs(a[2]-a[1]),sum-abs(a[n]-a[n-1]));
	for(int i=2;i<n;i++)ans=min(ans,sum-abs(a[i+1]-a[i])-abs(a[i]-a[i-1])+abs(a[i+1]-a[i-1]));
	cout<<ans<<"\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
