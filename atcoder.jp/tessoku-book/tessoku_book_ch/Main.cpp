#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;

//グローバル変数
int T[1509][1509];


int main(void) {
    //入力
    int N;
    cin >> N;

    //処理
    rep(i, 1501) rep(j, 1501) T[i][j] = 0;

    rep(i, N) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        T[a][b] += 1;
        T[c][d] += 1;
        T[a][d] -= 1;
        T[c][b] -= 1;
    }


    for(int i = 0; i <= 1500; ++i) {
        for(int j = 1; j <= 1500; ++j) {
            T[i][j] = T[i][j-1] + T[i][j];
        }
    }
    for(int i = 1; i <= 1500; ++i) {
        for(int j = 0; j <= 1500; ++j) {
            T[i][j] = T[i-1][j] + T[i][j];
        }
    }

    int ans = 0;
    for(int i = 0; i <= 1500; ++i) {
        for(int j = 0; j <= 1500; ++j) {
            if(T[i][j] >= 1) ++ans;
        }
    }

    //出力
    cout << ans << endl;
    return 0;
}