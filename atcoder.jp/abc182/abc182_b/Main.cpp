#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n;
  cin>>n;
  
  vector<int>a(n);
  for(int i=0;i<n;i++)cin>>a.at(i);
  
  int count=0,ans;
  
  //2の処理
  for(int i=0;i<n;i++){
    if(a.at(i)%2==0)count++; 
  }
  if(count!=0)ans=2;
  
  //奇数の処理
  for(int i=3;i<1000;i=i+2){
    int tmp=0;
    for(int k=0;k<n;k++){
      if(a.at(k)%i==0)tmp++; 
    }
    if(count<tmp){
      count=tmp;
      ans=i;
    }
  }
  
  cout<<ans<<endl;
  return 0;
}