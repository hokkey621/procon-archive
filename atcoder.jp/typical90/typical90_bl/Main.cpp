#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep2(i, n) for(int i = 1; i <= (n); ++i)


int main(void) {
    //入力
    int N, Q;
    cin >> N >> Q;

    vector<ll> A(N + 1);
    rep2(i, N) cin >> A[i];
    
    //計算処理
    ll ans = 0;
    vector<ll> dp(N + 1, 0);
    rep2(i, N - 1) {
        dp[i] = A[i + 1] - A[i];
        ans += abs(dp[i]);
    }

    rep(i, Q) {
        int L, R, V;
        cin >> L >> R >> V;
        ll before = abs(dp[L - 1]) + abs(dp[R]);

        if(1 < L) dp[L - 1] += V;
        if(R < N) dp[R] -= V;
        ll after = abs(dp[L - 1]) + abs(dp[R]);

        ans += (after - before);
        cout << ans << endl;
    }

    return 0;
}