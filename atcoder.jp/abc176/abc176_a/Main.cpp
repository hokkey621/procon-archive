#include<iostream>
using namespace std;

int main(){
	int n,x,t;
  cin>>n>>x>>t;

  int i;
  i=n/x;
  if(n%x!=0)i++;
  
  cout<<i*t<<endl;
}