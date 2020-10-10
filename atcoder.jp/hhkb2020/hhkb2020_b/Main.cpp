#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void){
  int h,w;
  cin>>h>>w;
  
  vector<vector<char>>s(w,vector<char>(h));
  
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      cin>>s.at(j).at(i); 
    }
  }
  
  int ans=0;
  //横判定
  for(int i=0;i<h;i++){
    for(int j=0;j<w-1;j++){
       if(s.at(j).at(i)=='.' && s.at(j+1).at(i)=='.')ans++;
    }
  }
  
  //縦判定
  for(int j=0;j<w;j++){
    for(int i=0;i<h-1;i++){
       if(s.at(j).at(i)=='.' && s.at(j).at(i+1)=='.')ans++;
    }
  }
  
  cout<<ans<<endl;
  return 0;
}