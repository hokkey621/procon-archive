#include <iostream>
#include <string>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)


int main(void){
    string s, t;
    cin >> s >> t;
    int len = t.size();
    rep(i, len){
        if(s.substr(0, len - i) == t.substr(i)){
            if(s.substr(len - i) == t.substr(0, i)){
                cout << i << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
    return 0;
}