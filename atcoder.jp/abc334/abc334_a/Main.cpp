#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep2(i, a, b) for(int i = (a); i < (b); ++i)
const ll MOD = 1000000007;


int main(void) {
  // input
  int B, G;
  cin >> B >> G;
  
  // output
  if(B < G) cout << "Glove" << endl;
  else cout << "Bat" << endl;
  
  return 0;
}