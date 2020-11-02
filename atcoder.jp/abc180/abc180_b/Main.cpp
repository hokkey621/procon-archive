#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;

int main(void){
  int n;
  cin>>n;
 
  vector<int>x(n);
  for(int i=0;i<n;i++)cin>>x.at(i);
  
  long long md=0;
  double ud;
  int cd;
  
  //getFabs
  for(int i=0;i<n;i++){
    x.at(i)=abs(x.at(i)); 
  }
  
  //calculateMD
  for(int i=0;i<n;i++){
    md+=x.at(i); 
  }
  
  //calculateUD
  long long tmp=0;
  for(int i=0;i<n;i++){
  	tmp+=(x.at(i)*(long)x.at(i));  
  }
  ud=sqrt((double)tmp);
  
  
  //calculateCD
  cd=x.at(0);
  for(int i=0;i<n;i++){
  	cd=max(cd,x.at(i)); 
  }
  
  cout<<md<<'\n'<<fixed<<setprecision(15)<<ud<<'\n'<<cd<<endl;
  return 0;
  
}