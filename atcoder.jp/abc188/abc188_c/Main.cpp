#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
  int n;
  cin>>n;
  int pn=pow(2,n);
  vector<int>data(pn);
  vector<bool>check(pn);

  for(int i=0;i<pn;i++)cin>>data.at(i);
  for(int i=0;i<pn;i++)check.at(i)=true;

  for(int cnt=0;cnt<n-1;cnt++){
    int i=0,j=1;
    while(j<pn){
    while(check.at(i)!=true){
      i++;
      j++;
      if(j>pn)break;
    }
      if(j>pn)break;
    while(check.at(j)!=true){
      j++;
      if(j>pn)break;
    }

    if(data.at(i)<data.at(j))check.at(i)=false;
    else check.at(j)=false;

    i=j+1;
    j+=2;
    }
  }

  int i=0;
  while(check.at(i)==false)i++;
  int j=i+1;
  while(check.at(j)==false)j++;

  if(data.at(i)<data.at(j))cout<<i+1<<endl;
  else cout<<j+1<<endl;

  return 0;
}