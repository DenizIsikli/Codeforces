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

// Macros and optimizations
#pragma GCC optimize ("O3")
#define FAST_IO std::ios::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);

using ll = long long;

const int MAX_INT = 1e9;
const int MIN_INT = -1e9;

// Template functions
template<typename T>
void read_vector(std::vector<T> &vec) {
    for (T &val : vec) std::cin >> val;
}

int main() {
    FAST_IO;

    int t;
    std::cin >> t;
    
    vector<int> a(t);
    vector<int> b(t);
    read_vector(a);
    read_vector(b);

    ll a_volume_sum = accumulate(a.begin(), a.end(), 0LL);
    sort(b.begin(), b.end(), greater<int>());
    ll b_capacity_first_two = b[0]+b[1];
    cout << (b_capacity_first_two >= a_volume_sum? "YES" : "NO") << '\n';

    return 0;
}

