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
    int h, w;
    cin >> h >> w;
    
    vector<string>s(h);
    rep(i, h)cin >> s[i];
    int countWhite= 0;
    rep(i, h){
        rep(j, w){
            if(s[i][j] == '.')countWhite++;
        }
    }
    //距離保存用配列
    vector<vector<int> > dist(h, vector<int>(w, -1));
    dist[0][0] = 0;

    //既知かどうか
    queue<pair<int, int> >que;
    que.push(make_pair(0, 0));

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
            if (next_x < 0 || next_x >= h || next_y < 0 || next_y >= w) continue; // 場外アウトならダメ
            if (s[next_x][next_y] == '#') continue; // 壁はダメ

            // まだ見ていない頂点なら push
            if (dist[next_x][next_y] == -1) {
                que.push(make_pair(next_x, next_y));
                dist[next_x][next_y] = dist[x][y] + 1;
            }
        }
    }

    
    int length = dist[h - 1][w - 1];
    if(length == -1){
        cout << -1 << endl;
    }else{
        cout << countWhite - length - 1 << endl;
    }
    return 0;
}