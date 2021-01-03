#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

int main(){
  int n;
  cin>>n;
  
  vector<string>s(n);
  for(string& str:s)cin>>str;
  
  unordered_set<string>set(s.begin(),s.end());
  
  for(string& str:s){
    if(set.count('!'+str)){
      cout<<str<<endl;
      return 0;
    }
  }
  
  cout << "satisfiable" << endl;
  return 0;
}