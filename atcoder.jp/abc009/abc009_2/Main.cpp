#include <iostream>
#include <set>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)

int main(void){
  int n;
  cin >> n;
  
  set<int>st;
  rep(i, n){
    int x;
    cin >> x;
    st.insert(x);
  }
  auto itr = st.end();
  itr--;
  itr--;
  cout << *itr << endl;
  return 0;
}