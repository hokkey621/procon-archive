#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
  int a,b;
  cin>>a>>b;
  
  cout<<max({a+b,a-b,a*b})<<endl;
  return 0;
}