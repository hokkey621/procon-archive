#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;

const ll INF = 100100100100100100LL;

int main(void) {
    // 入力
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    ll N, L, R;
    cin >> N >> L >> R;
    vector<ll> A(N);
    rep(i, N) {
        cin >> A[i];
    }

    // 処理
    vector<ll> dp_l(N + 1), dp_r(N + 1);
    dp_l[0] = 0;
    for(int i = 1; i <= N; ++i) {
        dp_l[i] = min(dp_l[i - 1] + A[i - 1], L * i);
    }

    dp_r[N] = 0;
    for(int i = N - 1; 0 <= i; --i) {
        dp_r[i] = min(dp_r[i + 1] + A[i], R * (N - i));
    }

    ll ans = INF;
    rep(i, N + 1) ans = min(ans, dp_l[i] + dp_r[i]);

    //結果出力
    cout << ans << endl;
    return 0;
}