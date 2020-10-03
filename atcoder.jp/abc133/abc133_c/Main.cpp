#include <iostream>
using namespace std;

int main(void){
  long l,r;
  cin>>l>>r;
  
  const int mod=2019;
  
  int ans=2019;
  for(int i=l;i<r;i++){
    for(int j=i+1;j<=r;j++){
      int x=((i%mod)*(j%mod))%mod;
        
      if(x==0){
        cout<<0<<endl;
        return 0;
      }
      ans=min(x,ans);
    }
  }
  
  cout<<ans<<endl;
  return 0;
}