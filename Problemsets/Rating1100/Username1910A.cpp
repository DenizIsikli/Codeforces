#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    string s;
    cin>>s;
    while(!s.empty()&&s.back()=='0')s.pop_back();
    if(!s.empty())s.pop_back();
    cout<<s<<endl;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

// Kotlin Version (Original language of the problem statement)
// fun main() {
//     repeat(readInt()) {
//         println(readln().dropLastWhile { it == '0' }.dropLast(1))
//     }
// }
//
// private fun readInt() = readln().toInt()
