#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1e9+7;


int main(void) {
    //入力
    ll K;
    cin >> K;

    //計算処理
    if(K % 9 != 0) {
        cout << 0 << endl;
        return 0;
    }

    vector<ll> dp(K + 1);
    dp[0] = 1;
    for(int i = 1; i <= K; ++i) {
        int upper = min(i, 9);
        for(int j = 1; j <= upper; ++j) {
            dp[i] += dp[i - j];
            dp[i] %= MOD;
        }
    }

    cout << dp[K] << endl;
    return 0;
}