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
    int x;
	cin >> x;
	int ans = 0;
	int a1 = 0, a2 = 0, a3 = 0;

	while(min({a1, a2, a3}) < x){

		if (a1 <= a2 && a1 <= a3){
			a1 = min(a2, a3) * 2 + 1;
		}
		else if (a2 <= a1 && a2 <= a3){
			a2 = min(a1, a3) * 2 + 1;

		}
		else{
			a3 = min(a1, a2) * 2 + 1;
		}
		ans++;
	}
	cout << ans << '\n';
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

