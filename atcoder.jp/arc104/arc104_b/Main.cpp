#include <iostream>
#include <string>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(void) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    rep(i, n) {
        int countAT = 0, countCG = 0;
        for(int j = i; j < n; ++j) {
            if(s[j] == 'A') countAT++;
            else if(s[j] == 'T') countAT--;
            else if(s[j] == 'C') countCG++;
            else countCG--;

            if(countAT == 0 && countCG == 0) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}