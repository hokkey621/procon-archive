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
    int N;
    cin >> N;
    vector<int> p(N);
    rep(i, N) cin >> p[i];

    //処理
    vector<int> cnt(N, 0);
    rep(i, N) {
        int x = (p[i] - i - 1 + N) % N;
        ++cnt[(x - 1 + N) % N];
        ++cnt[x];
        ++cnt[(x + 1 + N) % N];
    }

    int ans = 0;
    rep(i, N) ans = max(ans, cnt[i]);

    //結果出力
    cout << ans << endl;
    return 0;
}