#include <iostream>
#include <string>
using namespace std;

int main(){
  char a,b,c;
  cin>>a>>b>>c;

 
  if(a==b && b==c && c==a)cout<<"Won"<<endl;
  else cout<<"Lost"<<endl;
  
}