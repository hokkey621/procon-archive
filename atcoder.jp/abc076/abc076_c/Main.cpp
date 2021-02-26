#include <iostream>
#include <string>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)


int main(void){
    string s, t;
    cin >> s >> t;
    int size_s = s.size();
    int size_t = t.size();

    bool can = false;
    for(int i = size_s - 1; 0 <= i; i--){
        bool check = true;
        for(int j = size_t - 1, k = i; 0 <= j; j--, k--){
            if(s[k] != '?' && s[k] != t[j]){
                check = false;
                break;
            }
        }
        if(check){
            can = true;
            for(int j = size_t - 1, k = i; 0 <= j; j--, k--){
                s[k] = t[j];
            }
            break;
        }
    }

    if(!can){
        cout << "UNRESTORABLE" << endl;
    }else{
        rep(i, size_s){
            if(s[i] == '?')s[i] = 'a';
        }
        cout << s << endl;
    }
    return 0;
}