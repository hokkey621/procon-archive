#include <iostream>
#include <string>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(void) {
    string s, t;
    cin >> s >> t;
    if(s < t) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}