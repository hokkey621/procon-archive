#include <iostream>
#include <vector>
using namespace std;

int main(void){
  long long n,t;
  int m;
  cin>>n>>m>>t;
  
  vector<int>a(m);
  vector<int>b(m);
  
  for(int i=0;i<m;i++){
    cin>>a.at(i)>>b.at(i); 
  }
  
  long long x=n;
  
  x-=a.at(0);
  if(x<=0){
      cout<<"No"<<endl;
      return 0;
  }else{
     x+=(b.at(0)-a.at(0));
      if(x>n)x=n;
    }
  
  
  for(int i=1;i<m;i++){
   	x-=(a.at(i)-b.at(i-1));
    if(x<=0){
      cout<<"No"<<endl;
      return 0;
    }else{
      x+=(b.at(i)-a.at(i));
      if(x>n)x=n;
    }
  }
  
  x-=(t-b.at(m-1));
  if(x<=0)cout<<"No"<<endl;
  else cout<<"Yes"<<endl;
  
  return 0;
}