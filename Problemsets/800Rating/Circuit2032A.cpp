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
    int n;
    cin >> n;
    vector<int> a(2*n);
    read_vector(a);
    map<int, int> fq;
    for (int x : a) {
        fq[x]++;
    }

    int min = MAX_INT;
    int max = MIN_INT;

    int zeros = fq[0];
    int ones = fq[1];

    min = ones%2;
    max = std::min(ones, zeros);

    cout << min << ' ' << max << '\n';
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

