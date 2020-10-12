#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
  int x[4];
  for(int i=0;i<4;i++)cin>>x[i];
  
  sort(x,x+4);
  
  if(x[0]+x[3]==x[1]+x[2] || x[0]+x[1]+x[2]==x[3])cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}