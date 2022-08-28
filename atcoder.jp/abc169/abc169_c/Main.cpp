#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    ll A, B_int, B_dec;
    scanf("%lld %lld.%lld", &A, &B_int, &B_dec);

    ll ans = A * (B_int * 100 + B_dec) / 100;
    cout << ans << endl;
    return 0;
}