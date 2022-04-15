#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    //入力
    int N, L;
    cin >> N >> L;

    //計算処理
    vector<ll> dp(N + 1);
    rep(i, N + 1) {
        if(i < L) dp[i] = 1;
        else dp[i] = (dp[i - L] + dp[i - 1]) % MOD;
    }

    //結果出力
    cout << dp[N] << endl;
    return 0;
}