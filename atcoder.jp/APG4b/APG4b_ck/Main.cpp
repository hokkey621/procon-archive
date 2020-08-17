#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int i=1;
  int x=1;
  while(S[i]!='\0'){
    if(S[i]=='+'){
      x++;
    }else{
      x--;
    }
    i+=2;
  }
  cout<<x<<endl;
  return 0;
}
