#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;

int X[1509][1509];
int Z[1509][1509];

int main(void) {
    //入力
    int H, W, N;
    cin >> H >> W >> N;

    rep(i, N) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        X[a][b] += 1;
        X[c+1][d+1] += 1;
        X[a][d+1] -= 1;
        X[c+1][b] -= 1;
    }

    //処理
    rep(i, 1501) rep(j, 1501) Z[i][j] = 0;

    for(int i = 1; i <= 1500; ++i) {
        for(int j = 1; j <= 1500; ++j) {
            Z[i][j] = Z[i][j-1] + X[i][j];
        }
    }
    for(int i = 1; i <= 1500; ++i) {
        for(int j = 1; j <= 1500; ++j) {
            Z[i][j] = Z[i-1][j] + Z[i][j];
        }
    }

    //出力
    for(int i = 1; i <= H; ++i) {
        for(int j = 1; j <= W; ++j) {
            cout << Z[i][j] << endl;
        }
    }
    return 0;
}