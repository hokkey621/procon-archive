#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main(void){
    string s;
    cin >> s;
    int cnt0 = count(s.begin(), s.end(), '0');
    int cnt1 = count(s.begin(), s.end(), '1');
    cout << 2 * min(cnt0, cnt1) << endl;
    return 0;
}