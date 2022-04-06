#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(void) {
    //入力
    double T, L, X, Y;
    cin >> T >> L >> X >> Y;
    int Q;
    cin >> Q;
    vector<int> E(Q);
    rep(i, Q) cin >> E[i];

    //計算処理
    rep(i, Q) {
        double rad = 2 * M_PI * E[i] / T;
        double x1 = 0, y1, z1;
        y1 = - L / 2 * sin(rad);
        z1 = L / 2 - L / 2 * cos(rad); 

        double ans = atan2(z1, sqrt(X*X + (Y - y1) * (Y - y1))) * 180 / M_PI;
        printf("%.12lf\n", ans);
    }
    return 0;
}