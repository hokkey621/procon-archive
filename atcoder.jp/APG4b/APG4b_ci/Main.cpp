#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  
  int MAX,MIN;
  MAX=max({A,B,C});
  MIN=min({A,B,C});
  
  cout<<MAX-MIN<<endl;
  return 0;
}
