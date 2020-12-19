#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
  int h,w;
  cin>>h>>w;

  vector<vector<int>> a(h, vector<int>(w));

  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      cin>>a.at(i).at(j);
    }
  }

  int min=a.at(0).at(0);

  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      if(min>a.at(i).at(j))min=a.at(i).at(j);
    }
  }  

  int ans=0;

  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      ans+=a.at(i).at(j)-min;
    }
  }

  cout<<ans<<endl;
  return 0;
}