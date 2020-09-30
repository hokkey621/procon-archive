#include <iostream>
using namespace std;

long gcd(long x,long y){
  if(x%y==0){
   return y; 
  }else{
   return gcd(y,x%y); 
  }
}

long lcm(long x,long y){
  return x/gcd(x,y)*y;
}

int main(void){
  long a,b,c,d;
  cin>>a>>b>>c>>d;
  
  long l;//cdの最小公倍数
  l=lcm(c,d);
  
  long ans=b-a+1;
  
  ans-=b/c-(a-1)/c;
  ans-=b/d-(a-1)/d;
  ans+=b/l-(a-1)/l;
  
  cout<<ans<<endl;
  return 0;
}