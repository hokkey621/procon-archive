#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main(void){
    string s;
    cin >> s;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int l, r;
        cin >> l >> r;
        reverse(s.begin() + l - 1, s.begin() + r);
    }
    cout << s << endl;
    return 0;
}