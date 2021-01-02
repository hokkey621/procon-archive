#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n;
  cin>>n;

  vector<int>x(n);
  vector<int>y(n);

  for(int i=0;i<n;i++){
    cin>>x.at(i)>>y.at(i);
  }

  int cnt=0;

  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      double ans=(double)(y.at(j)-y.at(i))/(x.at(j)-x.at(i));

      if(-1<=ans && ans<=1)cnt++;
    }
  }

  cout<<cnt<<endl;

  return 0;

}