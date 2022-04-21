#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1000000007;
#define rep(i, n) for(int i = 0; i < (n); ++i)


ll mod_pow(ll x, ll n) {
    if(n == 0) return 1;
    else if(n == 1) return x % MOD;
    else if(n % 2 != 0) return x * mod_pow(x, n - 1) % MOD;
    else {
        ll tmp = mod_pow(x, n / 2);
        return tmp * tmp % MOD;
    }
}


int main(void) {
    //入力
    ll N, K;
    cin >> N >> K;

    //計算処理
    if(K == 1) {
        if(N == 1) cout << 1 << endl;
        else cout << 0 << endl;
    } else if(N == 1) {
        cout << K << endl;
    } else if(N == 2) {
        cout << K * (K - 1) % MOD << endl;
    } else {
        cout << (K * (K - 1)) % MOD * mod_pow(K - 2, N - 2) % MOD << endl;
    }

    return 0;
}