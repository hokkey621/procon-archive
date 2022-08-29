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
    long double A, B, H, M;
    cin >> A >> B >> H >> M;

    //処理
    long double rad = 2 * M_PI * ((H / 12.0 + M / 60.0 / 12.0) - M / 60.0);
    long double res = sqrtl(A * A + B * B - 2 * A * B * cosl(rad));

    //結果出力
    printf("%.20Lf\n", res);
    return 0;
}