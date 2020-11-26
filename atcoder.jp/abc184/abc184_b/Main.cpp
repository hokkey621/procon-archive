#include <iostream>
#include <string>
using namespace std;

int main(){
  int n,x;
  cin>>n>>x;
  
  string s;
  cin>>s;
  
  for(int i=0;i<n;i++){
   	if(s.at(i)=='o'){
     	x++; 
    }else{
      if(1<=x)x--;
    }
  }
  
  cout<<x<<endl;
  return 0;
}