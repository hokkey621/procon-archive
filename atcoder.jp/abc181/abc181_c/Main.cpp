#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
#define SWAP(type,x,y)do{type t;t=x;x=y;y=t;}while(0)

int main(void){
  int n;
  cin>>n;

  vector<vector<int>>a(2,vector<int>(n));
  for(int i=0;i<n;i++){
    cin>>a.at(0).at(i)>>a.at(1).at(i);
  }

  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      if(a.at(0).at(i)>a.at(0).at(j)){
        SWAP(int,a.at(0).at(i),a.at(0).at(j));
        SWAP(int,a.at(1).at(i),a.at(1).at(j));
      }else if((a.at(0).at(i)==a.at(0).at(j)) && (a.at(1).at(i)>a.at(1).at(j))){
        SWAP(int,a.at(0).at(i),a.at(0).at(j));
        SWAP(int,a.at(1).at(i),a.at(1).at(j));
      }
    }
  }
  
  
  for(int i=0;i<n-2;i++){
    for(int j=i+1;j<n-1;j++){
      for(int k=j+1;k<n;k++){
         int dx1,dx2,dy1,dy2;
         dx1=a.at(0).at(j)-a.at(0).at(i);
         dx2=a.at(0).at(k)-a.at(0).at(i);
		 dy1=a.at(1).at(j)-a.at(1).at(i);
         dy2=a.at(1).at(k)-a.at(1).at(i);
        
        if((dx1*dy2)==(dx2*dy1)){
          cout<<"Yes"<<endl;
          return 0;
        }
      } 
    }
  }
  
  cout<<"No"<<endl;
  return 0;
  
}