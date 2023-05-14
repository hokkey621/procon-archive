#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep2(i, n) for(int i = 1; i <= (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    //入力
    int N, K;
    cin >> N >> K;
    vector<ll> A(N+1);
    rep2(i, N) cin >> A[i];

    //処理
    //累積和を取る
    vector<ll> S(N+1);
    S[0] = 0;
    rep2(i, N) S[i] = S[i - 1] + A[i];

    //しゃくとり法
    vector<int> R(N+1);
    R[0] = 0;
    rep2(i, N) {
        R[i] = R[i - 1];

        while(R[i] < N && S[R[i] + 1] - S[i - 1] <= K) {
            R[i] += 1;
        }
        
    }

    //出力
    ll ans = 0;
    rep2(i, N) ans += (R[i] - i + 1);
    cout << ans << endl;
    return 0;
}