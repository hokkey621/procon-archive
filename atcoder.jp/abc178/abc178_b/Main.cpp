#include <iostream>
using namespace std;

int main(void){
  long long a,b,c,d;
  cin>>a>>b>>c>>d;
  
  if(0<=b && 0<=d){
    if(a*c<b*d)cout<<b*d<<endl;
    else cout<<a*c<<endl;
  }else if(0<=a && d<=0){
    cout<<a*d<<endl; 
  }else if(b<=0 && 0<=c){
    cout<<b*c<<endl;
  }else if((b<=0 && d<=0) || (a*b<=0 && d<=0) || (c*d<=0 && b<=0)){
    cout<<a*c<<endl; 
  }
  
  return 0;
  
}