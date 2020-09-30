#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
  int n,k;
  cin>>n>>k;
  double ans=0;
  
  for(int i=1;i<=n;i++){
    double tmp=1.0/(double)n;
    int check=i;
    while(check<k){
     check*=2; 
     tmp/=2;
    }
      ans+=tmp;
  }
   cout<<fixed<<setprecision(12)<<ans<<endl;
  return 0;
}