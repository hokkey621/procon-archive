#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)


int main(void){
    char c[4][4];
    rep(i, 4) {
        rep(j, 4) cin >> c[i][j];
    }
    for(int i = 3; 0 <= i; i--) {
        for(int j = 3; 0 < j; j--) {
            cout << c[i][j] << ' ';
        }
        cout << c[i][0] << endl;
    }
    return 0;
}