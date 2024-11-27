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
#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int MAX_INT = 1e9;
const int MIN_INT = -1e9;

template<typename T>
void read_vector(std::vector<T> &vec) {
    for (T &val : vec) std::cin >> val;
}

void solve() {
    int n, m; cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    ll sum = 0;

    auto maxBishopValue = [&](vector<vector<int>> &grid, int x, int y) -> ll {
        ll sum = 0;
        
        // Top left -> Bottom right
        for (int i = 0; x + i < n && y + i < m; i++) {
            sum += grid[x + i][y + i];
        }

        // Top right -> Bottom left
        for (int i = 0; x + i < n && y - i >= 0; i++) {
            sum += grid[x + i][y - i];
        }

        // Bottom left -> Top right
        for (int i = 0; x - i >= 0 && y + i < m; i++) {
            sum += grid[x - i][y + i];
        }

        // Bottom right -> Top left
        for (int i = 0; x - i >= 0 && y - i >= 0; i++) {
            sum += grid[x - i][y - i];
        }

        return sum - (grid[x][y]*3);
    };

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum = max(sum, maxBishopValue(grid, i, j));
        }
    }

    cout << sum << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

