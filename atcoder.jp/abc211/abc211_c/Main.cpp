#include <iostream>
#include <string>
#include <vector>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    string s;
    cin >> s;
    int n = s.size();
    
    vector<vector <ll> > dp(n+1, vector<ll> (9));
    rep(i, n+1) dp[i][0] = 1;

    string t = "chokudai";
    
    rep(i, n) {
        rep(j, 8) {
            if(s[i] == t[j]) {
                dp[i+1][j+1] = (dp[i][j+1] + dp[i][j]) % MOD;
            } else {
                dp[i+1][j+1] = dp[i][j+1];
            }
        }
    }

    cout << dp[n][8] << endl;
    return 0;
}