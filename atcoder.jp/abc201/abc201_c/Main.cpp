#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(void){
    string s;
    cin >> s;

    int cnt = 0;
    rep(num, 10000) {
        vector<int> data(10);
        int x = num;
        rep(i, 4) {
            data[x%10] = 1;
            x /= 10;
        }

        bool can = true;
        rep(i, 10) {
            if(s[i] == 'o' && data[i] != 1) can = false;
            if(s[i] == 'x' && data[i] != 0) can = false;
        }
        if(can) cnt++;
    }
    cout << cnt << endl;
    return 0;
}