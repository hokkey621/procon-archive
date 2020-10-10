#include <iostream>
#include <string>
using namespace std;

int main(void){
  string n;
  cin>>n;
  int len=n.size();
  
  int sum=0;
  for(int i=0;i<len;i++){
    sum+=n[i]-'0';
  }
  if(sum%9==0)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  
  return 0;
}