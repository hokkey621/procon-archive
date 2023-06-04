#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    //入力
    int N, W;
    cin >> N >> W;
    vector<ll> w(N+1), v(N+1);
    for(int i = 1; i <= N; ++i) cin >> w[i] >> v[i];

    //dp
    vector<vector<ll> > dp(N+1, vector<ll>(W+1, -100100100100100LL));
    dp[0][0] = 0;

    for(int i = 1; i <= N; ++i) {
        for(int j = 0; j <= W; ++j) {
            if(j < w[i]) dp[i][j] = dp[i-1][j];
            else dp[i][j] = max(dp[i-1][j], dp[i-1][j - w[i]] + v[i]);
        }
    }
    //出力
    
    cout << *max_element(dp[N].begin(), dp[N].end()) << endl;
    return 0;
}