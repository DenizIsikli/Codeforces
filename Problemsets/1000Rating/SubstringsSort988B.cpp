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

    int n;
    std::cin >> n;

    vector<string> a(n);
    read_vector(a);

    sort(a.begin(), a.end(), [](const string &s1, const string &s2) {
        return s1.size() < s2.size();
    });

    bool flag = true;

    for (int i = 1; i < n; i++) {
        if (a[i].find(a[i - 1]) == string::npos) {
            flag = false;
            break;
        } else {
            continue;
        }
    }

    if (flag) {
        cout << "YES\n";
        for (const string &s : a) {
            cout << s << '\n';
        }
    } else {
        cout << "NO\n";
    }

    return 0;
}

