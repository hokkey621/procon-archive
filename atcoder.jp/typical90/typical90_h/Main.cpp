#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    //入力
    int N;
    cin >> N;
    string S;
    cin >> S;
    string target = "atcoder";
    int M = target.size();

    //計算処理
    vector<vector<ll> > dp(N + 1, vector<ll>(M + 1, 0));
    dp[0][0] = 1;
    rep(i, N) {
        rep(j, M + 1) {
            dp[i + 1][j] = (dp[i + 1][j] + dp[i][j]) % MOD;
            if(S[i] == target[j]) dp[i + 1][j + 1] = (dp[i + 1][j + 1] + dp[i][j]) % MOD;
        }
    }

    //結果出力
    cout << dp[N][M] << endl;
    return 0;
}