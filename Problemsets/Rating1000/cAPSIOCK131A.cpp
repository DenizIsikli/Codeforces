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

signed main() {
    string s, l = "";
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] <= 'Z')
			l += char(s[i] + 32);
		else if (i == 0)
			l += char(s[i] - 32);

		else {
			cout << s;
			return 0;
		}
	}
	cout << l;
}

