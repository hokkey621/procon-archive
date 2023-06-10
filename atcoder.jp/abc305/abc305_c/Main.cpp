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
    vector<string> S(H);
    rep(i, H) cin >> S[i];

    int a, b, c, d;
    a = c = 101010;
    d = b = -101010;

    rep(i, H) {
        rep(j, W) {
            if(S[i][j] == '#' && (i == 0 || S[i-1][j] == '.')) {
                a = min(a, i);
            }
            if(S[i][j] == '#' && (i == H - 1 || S[i + 1][j] == '.')) {
                b = max(b, i);
            }
        }
    }
    rep(i, H) {
        rep(j, W) {
            if(S[i][j] == '#' && (j == 0 || S[i][j-1] == '.')) {
                c = min(c, j);
            }
            if(S[i][j] == '#' && (j == W - 1 || S[i][j+1] == '.')) {
                d = max(d, j);
            }
        }
    }

    int x, y;
    // cout << a << b << c << d << endl;
    for(int i = a; i <= b; ++i) {
        for(int j = c; j <= d; ++j) {
            if(S[i][j] == '.') {
                x = i;
                y = j;
            }
        }
    }

    cout << x + 1 << ' ' << y + 1 << endl;

    return 0;
}