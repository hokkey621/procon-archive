#include <iostream>
#include <string>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)


int main(void){
  int n, a, b;
  cin >> n >> a >> b;
  int ans = 0;
  rep(i, n){
    string s;
    cin >> s;
    int d;
    cin >> d;
    
    if(d < a) d = a;
    if(b < d) d = b;
    if(s=="West") d *= -1;
    ans += d;
  }
  if(ans < 0)cout << "West" << ' ' << abs(ans) << endl;
  else if(ans > 0) cout << "East" << ' ' << ans << endl;
  else cout << 0 << endl;
  return 0;
}