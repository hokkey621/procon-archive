#include <iostream>
using namespace std;

int main(){
  int x,y;
  cin>>x>>y;

  if(max(x,y)<min(x,y)+3)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return  0;
}