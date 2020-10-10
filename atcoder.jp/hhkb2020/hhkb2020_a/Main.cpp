#include <iostream>
#include <string>
using namespace std;

int main(void){
  char s,t;
  cin>>s>>t;
  
  if(s=='Y')t=toupper(t);
  
  cout<<t<<endl;
  return 0;
  
}