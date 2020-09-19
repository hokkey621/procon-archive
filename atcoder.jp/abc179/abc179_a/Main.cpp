#include <iostream>
#include <string>
using namespace std;

int main(void){
  string s;
  cin>>s;
  
  int end=s.size();
  
  cout<<s;
  if(s[end-1]=='s')cout<<"es"<<endl;
  else cout<<"s"<<endl;
  return 0;
}