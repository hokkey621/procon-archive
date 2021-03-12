#include <iostream>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)


int main(void){
    string s;
    cin >> s;
    int ans = 0;
    rep(i, s.size()){
        int j = i;
        while ((s[j] == 'A' || s[j] == 'T' || s[j] == 'G' || s[j] == 'C') && j < s.size()) j++;
        ans = max(ans, j - i);
    }
    cout << ans << endl;
    return 0;
}