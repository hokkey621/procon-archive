#include <iostream>
using namespace std;

int main(void){
  int x;
  cin>>x;
  
  int r=x%1000;
  
  r!=0?cout<<1000-(x%1000)<<endl:cout<<0<<endl;
  return 0;
}