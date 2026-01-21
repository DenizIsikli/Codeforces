#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string largestEven(string s) {
        int i;
        for(i=s.size()-1;i>=0;i--){
            if(s[i]=='2')break;
        }
        return s.substr(0,i+1);
    }
};
