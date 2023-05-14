#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


double calc_f(double x) {
    return x * x * x + x;
}


int main(void) {
    //入力
    double N;
    cin >> N;

    //出力
    double l = 0;
    double r = 100.0;
    rep(i, 20) {
        double m = (l + r) / 2.0;
        double f = calc_f(m);
        if(N < f) r = m;
        else l = m;
    }

    cout << l << endl;
    return 0;
}