#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int r1,r2,c1,c2;
  cin>>r1>>c1>>r2>>c2;
  
  int ans=3;
  
  int r=r2-r1,c=c2-c1;
  
  if(r==0 && c==0)ans=0;
  else if(r==-c || r==c ||abs(r)+abs(c)<=3)ans=1;
  else if((r1+r2+c1+c2)%2==0 || abs(r)+abs(c)<=6 || abs(r-c)<=3 || abs(r+c)<=3)ans=2;
  
  cout<<ans<<endl;
  return 0;
}