#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <queue>
using namespace std;
#define rep(i ,n) for(int i = 0; i < (int)(n); i++)
const int dx[4] = { 1, 0, -1, 0 };
const int dy[4] = { 0, 1, 0, -1 };


int main(void){
    //初期準備
    int r, c;
    cin >> r >> c;
    int sy, sx, gy, gx;
    cin >> sy >> sx;
    cin >> gy >> gx;
    vector<string>s(r);
    rep(i, r)cin >> s[i];

    //距離保存用配列
    vector<vector<int> > dist(r, vector<int>(c, -1));
    dist[sy - 1][sx - 1] = 0;

    //既知かどうか
    queue<pair<int, int> >que;
    que.push(make_pair(sy - 1, sx - 1));

    //BFS
    while (!que.empty()) {
        pair<int, int> current_pos = que.front(); // キューの先頭を見る (C++ ではこれをしても pop しない)
        int x = current_pos.first;
        int y = current_pos.second;
        que.pop(); // キューから pop を忘れずに

        // 隣接頂点を探索
        for (int direction = 0; direction < 4; ++direction) {
            int next_x = x + dx[direction];
            int next_y = y + dy[direction];
            if (next_x < 0 || next_x >= r || next_y < 0 || next_y >= c) continue; // 場外アウトならダメ
            if (s[next_x][next_y] == '#') continue; // 壁はダメ

            // まだ見ていない頂点なら push
            if (dist[next_x][next_y] == -1) {
                que.push(make_pair(next_x, next_y));
                dist[next_x][next_y] = dist[x][y] + 1;
            }
        }
    }

    
    cout << dist[gy - 1][gx -1] << endl;
    return 0;
}