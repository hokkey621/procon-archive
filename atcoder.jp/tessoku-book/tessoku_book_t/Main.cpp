#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    //入力
    string S, T;
    cin >> S >> T;
    int N = S.size(), M = T.size();
    
    //dp
    vector<vector<int> > dp(N+1, vector<int>(M+1));
    dp[0][0] = 0;
    for(int i = 0; i <= N; ++i) {
        for(int j = 0; j <= M; ++j) {
            if(1 <= i && 1 <= j) {
                if(S[i-1] == T[j - 1]) {
                    //文字が一致
                    dp[i][j] = max({dp[i-1][j], dp[i][j-1], dp[i-1][j-1] + 1});
                } else {
                    //不一致
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            } else {
                if(1 <= i) {
                    dp[i][j] = dp[i-1][j];
                } else if(1 <= j) {
                    dp[i][j] = dp[i][j-1];
                }
            }
        }
    }

    //出力
    cout << dp[N][M] << endl;
    return 0;
}