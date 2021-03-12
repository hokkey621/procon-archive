#include <iostream>
#include <string>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)


int main(void){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    rep(i, n - 2){
        if(s[i] == 'A'){
            if(s[i + 1] == 'B'){
                if(s[i + 2] == 'C'){
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}