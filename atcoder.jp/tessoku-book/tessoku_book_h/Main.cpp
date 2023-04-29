#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;

int main(void) {
    //入力
    int H, W;
    cin >> H >> W;

    vector<vector<int> > X(H, vector<int>(W)); // 2次元配列を宣言

    rep(i, H) rep(j, W) cin >> X[i][j];

    //処理
    vector<vector<int> > S(H+1, vector<int>(W+1, 0)); // 2次元累積和を初期化
    for(int i = 1; i <= H; ++i) {
        for(int j = 1; j <= W; ++j) {
            S[i][j] = S[i-1][j] + S[i][j-1] - S[i-1][j-1] + X[i-1][j-1]; // 2次元累積和を求める
        }
    }

    //出力
    int Q;
    cin >> Q;
    rep(i, Q) {
        int A, B, C, D;
        cin >> A >> B >> C >> D;
        cout << S[C][D] - S[A-1][D] - S[C][B-1] + S[A-1][B-1] << endl; // 2次元累積和を使ってクエリを処理する
    }
    return 0;
}
