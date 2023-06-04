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
    int V = 100000;
    vector<vector<ll> > dp(N+1, vector<ll>(V+1, 100100100100));
    dp[0][0] = 0;
    
    for(int i = 1; i <= N; ++i) {
        for(int j = 0; j <= V; ++j) {
            if(j < v[i]) dp[i][j] = dp[i-1][j];
            else dp[i][j] = min(dp[i-1][j], dp[i-1][j - v[i]] + w[i]);
        }
    }

    //出力
    ll ans;
    rep(i, V+1) {
        if(dp[N][i] <= W) ans = i;
    }
    cout << ans << endl;
    return 0;
}