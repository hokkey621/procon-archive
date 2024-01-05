#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep2(i, a, b) for(int i = (a); i < (b); ++i)
const ll MOD = 1000000007;

int main(void) {
    // input
    int R, C;
    cin >> R >> C;
    int sy, sx, gy, gx;
    cin >> sy >> sx >> gy >> gx;
    --sy; --sx; --gy; --gx;  // 座標を0-indexedに変換

    vector<vector<char>> c(R, vector<char>(C));
    rep(i, R) rep(j, C) cin >> c[i][j];

    // solve
    vector<vector<int>> dist(R, vector<int>(C, -1));
    dist[sy][sx] = 0;
    queue<P> q;
    q.push(make_pair(sy, sx));
    while(!q.empty()) {
        auto [y, x] = q.front();
        q.pop();
        int dx[4] = {1, 0, -1, 0};
        int dy[4] = {0, 1, 0, -1};
        rep(i, 4) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if(nx < 0 || nx >= C || ny < 0 || ny >= R) continue;
            if(c[ny][nx] == '#') continue;
            if(dist[ny][nx] != -1) continue;
        
            dist[ny][nx] = dist[y][x] + 1;
            q.push(make_pair(ny, nx));
        }
    }

    // output
    cout << dist[gy][gx] << endl;
    return 0;
}
