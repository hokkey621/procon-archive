#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(void) {
    int n;
    cin >> n;
    vector<string> s(n), t(n);
    rep(i, n) cin >> s[i] >> t[i];

    rep(i, n) {
        for(int j = i + 1; j < n; ++j) {
            if(s[i] == s[j]) {
                if(t[i] == t[j]) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}