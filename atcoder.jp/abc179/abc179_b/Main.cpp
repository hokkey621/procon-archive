#include <iostream>
#include <vector>
using namespace std;

int main(void){
  int n;
  cin>>n;
  
  vector<vector<int>>d(n,vector<int>(2));
  
  for(int i=0;i<n;i++){
   for(int j=0;j<2;j++){
    cin>>d.at(i).at(j); 
   }
  }
  
  bool flag=false;
  
  for(int i=0;i<n-2;i++){
   if((d.at(i).at(0)==d.at(i).at(1)) && (d.at(i+1).at(0)==d.at(i+1).at(1)) &&(d.at(i+2).at(0)==d.at(i+2).at(1))){
     flag=true;
     break;
   }
  }
  
  if(flag)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  
  return 0;
}