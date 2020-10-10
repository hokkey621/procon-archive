#include <iostream>
using namespace std;

int main(void){
  long long x;
  cin>>x;
  
  long long stock=100;
  int year=0;
  const int rate=100;
  
  while(stock<x){
   stock+=stock/rate;
    year++;
  }
  cout<<year<<endl;
  return 0;
}