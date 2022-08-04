#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;

const int INF = 100100100;

/* 4 方向への隣接頂点への移動を表すベクトル */
const int dx[4] = { 1, 0, -1, 0 };
const int dy[4] = { 0, 1, 0, -1 };

struct state
{
    int x, y, dir;
};


int main() {
    /* 入力受け取り */

    /* 縦と横の長さ */
    int height, width;
    cin >> height >> width;

    /* スタート地点とゴール地点 */
    int sx, sy, gx, gy;
    cin >> sx >> sy >> gx >> gy;
    --sx; --sy; --gx; --gy;

    /* 盤面 */
    vector<string> field(height);
    for (int h = 0; h < height; ++h) cin >> field[h];


    ////////////////////////////////////////
    /* 幅優先探索の初期設定 */
    ////////////////////////////////////////

    // 「一度見た頂点」のうち「まだ訪れていない頂点」を表すキュー
    deque<state> deq; 

    // コストを格納する配列
    vector<vector<vector<int>>> data(height, vector<vector<int>>(width, vector<int>(4, INF)));

    //初期設定
    rep(i, 4) {
        data[sx][sy][i] = 0;
        deq.push_back({sx, sy, i});
    }

    ////////////////////////////////////////
    /* 幅優先探索を実施 */
    ////////////////////////////////////////

    /* キューが空になるまで */
    while (!deq.empty()) {
        state current_pos = deq.front(); // キューの先頭を見る (C++ ではこれをしても pop しない)
        int x = current_pos.x;
        int y = current_pos.y;
        int prior_direction = current_pos.dir;
        deq.pop_front(); // キューから pop を忘れずに

        // 隣接頂点を探索
        for (int direction = 0; direction < 4; ++direction) {
            int next_x = x + dx[direction];
            int next_y = y + dy[direction];
            if (next_x < 0 || next_x >= height || next_y < 0 || next_y >= width) continue; // 場外アウトならダメ
            if (field[next_x][next_y] == '#') continue; // 壁はダメ

            int cost;
            if(prior_direction != direction) {
                // 回転が生じる場合
                cost = data[x][y][prior_direction] + 1;
            } else {
                // 直進する場合
                cost = data[x][y][prior_direction];
            }

            if(cost < data[next_x][next_y][direction]) {
                data[next_x][next_y][direction] = cost;
                
                if(prior_direction != direction) {
                    deq.push_back({next_x, next_y, direction});
                } else {
                    deq.push_front({next_x, next_y, direction});
                }
            }
        }
    }


    ////////////////////////////////////////
    /* 結果出力 */
    ////////////////////////////////////////    
    int ans = INF;
    rep(i, 4) {
        ans = min(ans, data[gx][gy][i]);
    }
    cout << ans << endl;
    return 0;
}