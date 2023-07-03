#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    //入力
    int N;
    cin >> N;
    vector<int> P(N+1), A(N+1);
    P[0] = A[0] = -1;
    for(int i = 1; i <= N; ++i) cin >> P[i] >> A[i];

    //dp
    vector<vector<int> > dp(N+1, vector<int>(N+1));
    dp[1][N] = 0;
    for(int len = N - 2; 0 <= len; --len) {
        for(int l = 1; l <= N - len; ++l) {
            int r = l + len;

            int score1, score2;
            if(l <= P[l-1] && P[l-1] <= r) score1 = A[l-1];
            else score1 = 0;
            
            if(l <= P[r+1] && P[r+1] <= r) score2 = A[r+1];
            else score2 = 0;

            if(l == 1) dp[l][r] = dp[l][r+1] + score2;
            else if(r == N) dp[l][r] = dp[l-1][r] + score1;
            else dp[l][r] = max(dp[l][r+1] + score2, dp[l-1][r] + score1);
        }
    }

    int ans = -1;
    for(int i = 1; i <= N; ++i) ans = max(ans, dp[i][i]);
    cout << ans << endl;
    return 0;
}