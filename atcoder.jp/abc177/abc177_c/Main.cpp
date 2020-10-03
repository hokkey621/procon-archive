#include <iostream>
#include <vector>
using namespace std;

int main(void){
  int n;
  cin>>n;
  
  vector<int>a(n);
  long long sum=0;
  const int MOD=1000000007;
  
  for(int i=0;i<n;i++){
    cin>>a.at(i);
    sum+=a.at(i);
    sum%=MOD;
  }
  
  long ans=0;
  for(int i=0;i<n;i++){
    sum-=a.at(i);
    if(sum<0)sum+=MOD;
    
    ans+=sum*a.at(i);
    ans%=MOD;
  }
  
  cout<<ans<<endl;
  return 0;
}