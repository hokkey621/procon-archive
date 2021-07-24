#include <iostream>
#include <string>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(void) {
    string s[4];
    rep(i, 4) cin >> s[i];
    int check[4] = {0};

    rep(i, 4) {
        if(s[i] == "H") ++check[0];
        else if(s[i] == "2B") ++check[1];
        else if(s[i] == "3B") ++check[2];
        else if(s[i] == "HR") ++check[3];
    }

    rep(i, 4) {
        if(check[i] == 0) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}