#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;
const ll INF = 100100100;


int main(void) {
    //入力
    ll A, B, N;
    cin >> A >> B >> N;

    //処理
    ll ans = (ll)(floorl(A * N / B) - A * floorl(N / B));
    if(B - 1 <= N) {
        ans = max(ans, (ll)(floorl(A * (B - 1) / B) - A * floorl((B - 1) / B)));
    }

    //結果出力
    cout << ans << endl;
    return 0;
}