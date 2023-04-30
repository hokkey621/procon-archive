#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;

int G[1510][1510];
int S[1510][1510];

int main(void) {
    //入力
    int N;
    cin >> N;
    
    rep(i, N) {
        int X, Y;
        cin >> X >> Y;
        G[X][Y] += 1;
    }

    //処理
    rep(i, 1501) rep(j, 1501) S[i][j] = 0;

    for(int x = 1; x <= 1500; ++x) {
        for(int y = 1; y <= 1500; ++y) {
            S[x][y] = S[x-1][y] + G[x][y];
        }
    }
    for(int x = 1; x <= 1500; ++x) {
        for(int y = 1; y <= 1500; ++y) {
            S[x][y] = S[x][y-1] + S[x][y];
        }
    }

    //出力
    int Q;
    cin >> Q;
    rep(i, Q) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << S[c][d] + S[a-1][b-1] - S[a-1][d] - S[c][b-1] << endl;
    }
    return 0;
}