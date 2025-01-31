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

using namespace std;

using ll = long long;

const int MAX_INT = 1e9;
const int MIN_INT = -1e9;

template<typename T>
void read_vector(std::vector<T> &vec) {
    for (T &val : vec) std::cin >> val;
}

void solve() {
    int n;cin >> n;
    int cnt = 0;
    int cntz = 0;
    for(int i = 0;i < n; i++)
    {
        int x;cin>> x;
        if(x == 5) cnt++;else cntz++;
    }    
    if(cntz == 0) cout << -1;
    else if(cnt/9 == 0) cout << 0; else
    cout << string(cnt/9*9, '5') << string(cntz, '0');
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}

