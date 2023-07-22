#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


ll mypower(ll a, ll b) {
    ll p = a;
    ll ans = 1;
    rep(i, 30) {
        ll div = (1 << i);
        if((b / div) % 2 == 1) {
            ans = (ans * p) % MOD;
        }
        p = (p * p) % MOD;
    }
    return ans;
}


int main(void) {
    // 入力
    ll n, r;
    cin >> n >> r;

    //分子aを求める
    ll a = 1;
    rep(i, n) a = a * (i + 1) % MOD;

    //分母bを求める
    ll b = 1;
    rep(i, r) b = b * (i + 1) % MOD;
    rep(i, n - r) b = b * (i + 1) % MOD;

    //出力
    cout << (a * mypower(b, MOD - 2) % MOD) << endl;
    return 0;
}