#include <iostream>
#include <string>
#include <deque>
#include <algorithm>
using namespace std;



int main(void){
    string s;
    cin >> s;
    deque<char> t;
    bool rev = false;
    for(char c : s) {
        if(c == 'R') {
            rev = !rev;
        }else{
            if(rev) t.push_front(c);
            else t.push_back(c);
        }
    }

    string ans = "";
    if(rev) reverse(t.begin(), t.end());
    for(char c : t) {
        if(ans.size() != 0 && ans.back() == c) {
            ans.pop_back();
        } else {
            ans += c;
        }
    }
    cout << ans << endl;
    return 0;
}