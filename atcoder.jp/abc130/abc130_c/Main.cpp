#include <iostream>
#include <iomanip>
using namespace std;
typedef long long ll;

int main(void){
  ll w,h,x,y;
  cin>>w>>h>>x>>y;
  
  double a=w*h/2.0;
  cout<<a<<' ';
  if(w==x*2 && h==y*2)cout<<1<<endl;
  else cout<<0<<endl;

  return 0;
}