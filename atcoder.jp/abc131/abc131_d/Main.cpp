#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main(void){
  int n;
  cin>>n;
  
  vector<pair<int,int>>task;
  
  for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    task.emplace_back(y,x);
  }
  
  sort(task.begin(),task.end());
  
  long sum=0;
  bool check=true;
  for(auto v:task){
    sum+=v.second;
    if(v.first<sum){
       check=false;
       break;
    }
  }
  
  if(check)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}