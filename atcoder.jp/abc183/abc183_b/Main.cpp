#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
  long sx,sy,gx,gy;
  cin>>sx>>sy>>gx>>gy;
  
  long msy=-sy;
  
  double ans;
  
  ans=-(double)(gx*msy-sx*gy)/(gy-msy);
  
  cout<<fixed<<setprecision(10)<<ans<<endl;
  
  return 0;
}