#include <iostream>
using namespace std;
const int INF = 1<<29;


int main(void){
  int a, b, w;
  cin >> a >> b >> w;
  w *= 1000;
  int r = -INF;
  int l = INF;
  for(int n = 1; n <= w; n++){
    if(a * n <= w && w <= b * n){
      r = max(r, n);
      l = min(l, n); 
    }
  }
  if(r == -INF || l == INF)cout <<"UNSATISFIABLE" << endl;
  else cout << l << ' ' << r << endl;
  return 0;
}