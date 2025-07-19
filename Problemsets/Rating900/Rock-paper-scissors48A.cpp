#include <iostream>

int main(){
  std::string s,a;
  for(;std::cin>>a;s+=a[0]);
  std::cout<<(s=="prr"||s=="rss"||s=="spp"?'F':s=="rpr"||s=="srs"||s=="psp"?'M':s=="rrp"||s=="ssr"||s=="pps"?'S':'?');
}
