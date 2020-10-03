#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(void){
  int n,d;
  cin>>n>>d;
  
  vector<long int>x(n);
  vector<long int>y(n);
  for(int i=0;i<n;i++){
    cin>>x.at(i)>>y.at(i); 
  }
  
  int cnt=0;
  for(int i=0;i<n;i++){
    long long z=x.at(i)*x.at(i)+y.at(i)*y.at(i);
    if(sqrt(z)<=d)cnt++;
  }
  cout<<cnt<<endl;
  return 0;
}