#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n, k, l, r;
    scanf("%lld %lld %lld %lld", &n, &l, &r, &k);
    if(n & 1) printf("%lld\n", l);
    else if(n == 2 || __lg(l) == __lg(r)) printf("-1\n");
    else printf("%lld\n", k < n - 1? l: 1ll << (__lg(l) + 1));
}
int main(){
    int T; scanf("%d", &T);
    while(T--) solve();
    return 0;
}
