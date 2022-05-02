#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ull MOD = 1000000007;


ull mod_pow(ull a, ull b) {
    if(b == 0) return 1;
    else if(b == 1) return a;
    else if(b % 2 == 1) return (a * mod_pow(a, b - 1)) % MOD;
    else {
        ll t = (mod_pow(a, b / 2)) % MOD;
        return (t * t) % MOD;;
    }
}


ull func(ull a) {
    ull x = ((a % MOD) * ((a + 1) % MOD)) % MOD;
    return x * mod_pow(2, MOD - 2) % MOD;
}


int main(void){
    //入力
    ull L, R;
    cin >> L >> R;
    
    //計算処理
    ull ans = 0;
    ull pow10[20];
    pow10[0] = 1;
    rep(i, 19) pow10[i + 1] = pow10[i] * 10;
    
    rep(i, 19) {
        ll l = max(L, pow10[i]);
        ll r = min(R, pow10[i + 1] - 1);
        if(l > r) continue;
        
        ans += ((func(r) - func(l - 1) + MOD) % MOD) * (i + 1) % MOD;
    }
    
    //結果出力
    cout << ans % MOD << endl;
    return 0;
}
