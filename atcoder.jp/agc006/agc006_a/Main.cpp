#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int  main(void) {
    int n;
    string s, t;
    cin >> n >> s >> t;

    int lenS = s.size();
    int lenT = t.size();
    int x = min(lenS, lenT);
    while(0 < x) {
        if(s.substr(lenS - x, x) == t.substr(0, x)) break;
        --x;
    }
    cout << max(lenS + lenT - x, n) << endl;
    return 0;
}