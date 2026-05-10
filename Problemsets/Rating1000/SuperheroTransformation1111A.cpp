#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
bool isVowel(char c){
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}
void solve(){
    string s,t;
    cin>>s>>t;
    if(s.size()!=t.size()){
        cout<<"No"<<endl;
        return;
    }
    bool f=1;
    for(int i=0;i<s.size();i++){
        if(isVowel(s[i])&&isVowel(t[i])||!isVowel(s[i])&&!isVowel(t[i]))continue;
        f=0;
        break;
    }
    cout<<(f?"Yes":"No")<<endl;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
