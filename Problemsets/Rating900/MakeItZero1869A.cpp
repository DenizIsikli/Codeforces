#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <cmath>
#include <unordered_map>
#include <unordered_set>
#include <numeric>
#include <functional>

#define int long long
#define endl '\n'

using namespace std;

void solve() {
    int n;cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	if(n&1){
		cout<<"4"<<'\n';
		cout<<"1 "<<n-1<<'\n';
		cout<<"1 "<<n-1<<'\n';
		cout<<n-1<<' '<<n<<'\n';
		cout<<n-1<<' '<<n<<'\n';
	}else{
		cout<<"2"<<'\n';
		cout<<"1 "<<n<<'\n';
		cout<<"1 "<<n<<'\n';
	}
	return;
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

