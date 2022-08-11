#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;
const int dx[4] = {0, 1, 0, -1};
const int dy[4] = {1, 0, -1, 0};


//グローバル変数
int H, W, sh, sw, ans = -1;
string c[16];
bool seen[16][16];


void dfs(int h, int w, int depth) {
    seen[h][w] = true;

    rep(i, 4) {
        int nw = w + dx[i];
        int nh = h + dy[i];

        if(nw < 0 || W <= nw || nh < 0 || H <= nh) continue;
        if((c[nh][nw] == '.') && (seen[nh][nw] == false)) {
            dfs(nh, nw, depth + 1);
        } else if((nh == sh) && (nw == sw) && (2 <= depth)) {
            ans = max(ans, depth + 1);
        }
    }
}


int main(void) {
    //入力
    cin >> H >> W;
    rep(i, H) {
        cin >> c[i];
    }

    //処理
    rep(h, H) {
        rep(w, W) {
            if(c[h][w] == '#') continue;

            rep(i, H) rep(j, W) seen[i][j] = false;
            sh = h;
            sw = w;
            dfs(sh, sw, 0);
        }
    }

    //結果出力
    cout << ans << endl;
    return 0;
}