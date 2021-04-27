#include <iostream>
#include <string>
using namespace std;
using ll = long long;



int main(void){
    string s;
    cin >> s;
    ll k;
    cin >> k;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != '1'){
            cout << s[i] << endl;
            break;
        }else{
            k--;
            if(k == 0){
                cout << 1 << endl;
                break;
            }
        }
    }
    return 0;
}