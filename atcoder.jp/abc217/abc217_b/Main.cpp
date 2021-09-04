#include <iostream>
#include <string>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(void) {
    int check[4] = {0};
    rep(i, 3) {
        string s;
        cin >> s;
        if(s == "ABC") check[0] = 1;
        else if(s == "ARC") check[1] = 1;
        else if(s == "AGC") check[2] = 1;
        else if(s == "AHC") check[3] = 1;
    }

    if(check[0] == 0) cout << "ABC" << endl;
    else if(check[1] == 0) cout << "ARC" << endl;
    else if(check[2] == 0) cout << "AGC" << endl;
    else if(check[3] == 0) cout << "AHC" << endl;
    return 0;
}