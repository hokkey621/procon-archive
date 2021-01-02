#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
  int a,b;
  cin>>a>>b;

  int x=0,y=0;
  
  for(int i=0;i<3;i++){
    x+=a%10;
    y+=b%10;

    a/=10;
    b/=10;
  }
  cout<<max(x,y)<<endl;
  return 0;
}