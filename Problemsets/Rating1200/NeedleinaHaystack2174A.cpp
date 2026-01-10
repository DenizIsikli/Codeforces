#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

int c[26];

void solve(){
    for(int i=0;i<26;i++)c[i]=0;
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s2.size();i++)c[s2[i]-'a']++;
    for(int i=0;i<s1.size();i++)c[s1[i]-'a']--;
    for(int i=0;i<26;i++)if(c[i]<0){cout<<"Impossible\n";return;}
    int idx=0;
    for(int i=0;i<26;i++){
        while(idx<s1.size()&&s1[idx]-'a'<=i){cout<<s1[idx];idx++;}
        for(int j=0;j<c[i];j++)cout<<(char)(i+'a');
    }
    cout<<"\n";
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}
