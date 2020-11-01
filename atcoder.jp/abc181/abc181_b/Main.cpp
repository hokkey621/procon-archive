#include <iostream>
#include <vector>
using namespace std;

int main(void){
  int n;
  cin>>n;
  vector<long long>a(n);
  vector<long long>b(n);
  
  for(int i=0;i<n;i++){
    cin>>a.at(i)>>b.at(i); 
  }
  
  long long sum=0;
  for(int i=0;i<n;i++){
    sum+=(b.at(i)+1)*b.at(i)/2-(a.at(i)-1)*a.at(i)/2;
  }
  cout<<sum<<endl;
  return 0;
  
}