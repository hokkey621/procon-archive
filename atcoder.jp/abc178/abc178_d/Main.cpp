#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

#define MOD 1000000007

int main(void){
  int s;
  cin>>s;
  
  vector<ll>x(s+1);
  
  x.at(0)=1;
  
  for(int i=3;i<=s;i++){
    for(int j=3;j<=s;j++){
      if(0<=i-j){
       x.at(i)+=x.at(i-j);
       x.at(i)%=MOD; 
      }
    }
  }
  
  cout<<x.at(s)<<endl;
  return 0;
  
}