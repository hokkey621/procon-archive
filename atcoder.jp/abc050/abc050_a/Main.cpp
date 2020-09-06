#include<iostream>
#include<string>
using namespace std;

int main(){
  int a,b;
  long int ans;
  char op;
  cin>>a>>op>>b;
   
  if(op=='+')ans=a+b;
  else if(op=='-')ans=a-b;
  
  cout<<ans<<endl;
  return 0;
}