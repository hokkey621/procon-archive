#include <iostream>
#include <string>
using namespace std;
#define rep(i, n) for(int i = 0 ; i < (n); i++)

int main(void){
    string s;
    cin >> s;
    string check = "ZONe";
    int cnt = 0;
    rep(i, s.size()){
        string tmp = s.substr(i, 4);
        if(tmp == check)cnt++;
    }
    cout << cnt << endl;
    return 0;
}