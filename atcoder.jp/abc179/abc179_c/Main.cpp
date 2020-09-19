#include <iostream>
#include <cmath>
using namespace std;

int main(void){
  int n;
  cin>>n;
  
  int a,b,c;
  long int cnt=0;
  
  for(int i=1;i<n;i++){
    int k=n-i;
    int root_k=(int)sqrt(k);
     for(a=1;a<=root_k;a++){
       if(k%a==0){
        cnt++;
          if(k/a!=a){
            cnt++;
          }
       }
     }
  }
  
  cout<<cnt<<endl;
  return 0;
}