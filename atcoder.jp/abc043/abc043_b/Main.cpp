#include <iostream>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)


int main(void) {
    string s;
    cin >> s;

    string ans;
    rep(i, s.size()) {
        if(s[i] == 'B') {
            if(ans.size() != 0) ans.pop_back();
        } else {
            ans.push_back(s[i]);
        }
    }
    
    cout << ans << endl;
    return 0;
}