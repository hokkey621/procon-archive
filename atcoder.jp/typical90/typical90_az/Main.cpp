#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    //入力
    int N;
    cin >> N;
    vector<vector<ll> > A(N, vector<ll>(6));
    rep(i, N) {
        rep(j, 6) {
            cin >> A[i][j];
        }
    }

    //計算処理
    vector<ll> sum(N, 0);
    rep(i, N) {
        sum[i] = accumulate(A[i].begin(), A[i].end(), 0);
    }

    ll ans = 1;
    rep(i, N) {
        ans = (ans * sum[i]) % MOD;
    }

    //結果出力
    cout << ans << endl;
    return 0;
}