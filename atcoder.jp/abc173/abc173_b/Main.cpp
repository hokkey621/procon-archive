#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void){
  int n;
  cin>>n;
  vector<string>s(n);
  for(int i=0;i<n;i++)cin>>s.at(i);
  
  int cntAC=0,cntWA=0,cntTLE=0,cntRE=0;
  
  for(int i=0;i<n;i++){
   	if(s.at(i)=="AC")cntAC++;
    else if(s.at(i)=="WA")cntWA++;
    else if(s.at(i)=="TLE")cntTLE++;
    else cntRE++;
  }
  
  cout<<"AC x "<<cntAC<<endl;
  cout<<"WA x "<<cntWA<<endl;
  cout<<"TLE x "<<cntTLE<<endl;
  cout<<"RE x "<<cntRE<<endl;
  
  return 0;
}