#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep2(i, a, b) for(int i = (a); i < (b); ++i)
const ll MOD = 1000000007;


int main(void) {
    // input
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, N) cin >> A[i];

    // solve
    vector<ll> cnt(100, 0);
    rep(i, N) ++cnt[A[i] % 100];

    ll ans = 0;
    rep2(i, 1, 50) {
        ans += cnt[i] * cnt[100 - i];
    }
    // 0と50だけ特別扱い
    ans += cnt[0] * (cnt[0] - 1) / 2;
    ans += cnt[50] * (cnt[50] - 1) / 2;

    // output
    cout << ans << endl;
    return 0;
}