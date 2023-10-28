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
    vector<ll> cnt(101, 0);
    rep(i, N) {
        ++cnt[A[i]];
    }

    ll ans = 0;
    rep(i, 101) {
        // nC3
        ans += cnt[i] * (cnt[i] - 1) * (cnt[i] - 2) / 6;
    }

    // output
    cout << ans << endl;
    return 0;
}