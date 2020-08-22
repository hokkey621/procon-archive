#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n;
  cin>>n;
  
  vector<int> A(n);
    
    for(int i=0;i<n;i++){
        cin>>A.at(i);
    }
  
  long long int step=0;
  for(int i=1;i<n;i++){
    if(A.at(i-1)>A.at(i)){
      step+=(A.at(i-1)-A.at(i));
      A.at(i)=A.at(i-1);
    }
  }
  
  cout<<step<<endl;
  
}
