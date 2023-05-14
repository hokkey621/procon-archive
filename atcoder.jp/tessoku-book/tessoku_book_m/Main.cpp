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
    vector<int> A(N+1), R(N+1, 0);
    rep2(i, N) cin >> A[i];

    //処理
    R[0] = 1;
    rep2(i, N-1) {
        R[i] = R[i-1];

        while(R[i] < N && A[R[i]+1] - A[i] <= K) {
            R[i] += 1;
        }
    }

    //出力
    ll ans = 0;
    rep2(i, N-1) ans += (R[i] - i);
    cout << ans << endl;
    return 0;
}