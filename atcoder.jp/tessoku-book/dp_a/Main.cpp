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
    vector<int> h(N+1);
    for(int i = 1; i <= N; ++i) cin >> h[i];

    //処理
    vector<int> dp(N+1);
    dp[1] = 0;
    dp[2] = abs(h[1] - h[2]);
    for(int i = 3; i <= N; ++i) {
        dp[i] = min(dp[i-2] + abs(h[i-2] - h[i]), dp[i-1] + abs(h[i-1] - h[i]));
    }

    //出力
    cout << dp[N] << endl;
    return 0;
}