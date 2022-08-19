#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    //入力
    int N, M;
    cin >> N >> M;

    dsu d(N + 1);
    rep(i, M) {
        int a, b;
        cin >> a >> b;
        d.merge(a, b);
    }

    //処理
    int ans = -1;
    for(int i = 1; i <= N; ++i) {
        ans = max(ans, d.size(i));
    }

    //結果出力
    cout << ans << endl;
    return 0;
}