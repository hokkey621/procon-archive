#include <iostream>
#include <string>
using namespace std;


int main(void) {
  string s;
  cin >> s;
  int cnt[6] = {0};
  for(int i = 0; i < s.size(); ++i) ++cnt[s[i] - 'A'];
  for(int i = 0; i < 6; ++i) {
    cout << cnt[i];
    if(i < 5) cout << ' ';
    else cout << '\n';
  }
  return 0;
}