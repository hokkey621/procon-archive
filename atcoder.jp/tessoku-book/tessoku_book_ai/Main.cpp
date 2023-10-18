#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep2(i, a, b) for(int i = (a); i < (b); ++i)
const ll MOD = 1000000007;


int main(void) {
    // input
    int N;
    cin >> N;
    // q: how to create 2d vector?
    // a: vector<vector<int>> dp(N + 1, vector<int>(N + 1));
    vector<vector<int>> dp(N + 1, vector<int>(N + 1));
    rep2(j, 1, N + 1) cin >> dp[N][j];

    // solve
    for(int i = N - 1; 1 <= i; --i) {
        rep2(j, 1, N + 1) {
            if(i % 2 == 1) {
                // i is odd
                dp[i][j] = max(dp[i + 1][j], dp[i + 1][j + 1]);
            } else {
                // i is even
                dp[i][j] = min(dp[i + 1][j], dp[i + 1][j + 1]);
            }
        }
    }

    // output
    cout << dp[1][1] << endl;
    return 0;
}