#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(void) {
    int n;
    cin >> n;
    set<string> s;
    

    rep(i, n) {
        string x;
        cin >> x;
        if(s.find(x) == s.end()) {
            cout << i + 1 << endl;
            s.insert(x);
        }
    }
    return 0;
}