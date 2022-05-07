#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
#define rep(i, n) for(int i = 0; i < (n); ++i)


void bfs(Graph G, vector<int> &dist, int sv) {
    queue<int> que;
    dist[sv] = 0;
    que.push(sv);

    while(!que.empty()) {
        int v = que.front();
        que.pop();

        //vから頂点探索
        for(auto nv: G[v]) {
            if(dist[nv] != -1) continue;

            dist[nv] = dist[v] + 1;
            que.push(nv);
        }
    }
}


int main(void) {
    //入力
    int N;
    cin >> N;

    Graph G(N + 1);
    rep(i, N - 1) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    
    //計算処理
    //一回目の最短経路探索
    vector<int> dist1(N + 1, -1);
    bfs(G, dist1, 1);
    int max_index = 0;
    rep(i, N + 1) {
        if(dist1[max_index] < dist1[i]) max_index = i;
    }

    //２回目の最短経路探索
    vector<int> dist2(N + 1, -1);
    bfs(G, dist2, max_index);
    int ans = 0;
    rep(i, N + 1) ans = max(ans, dist2[i]);

    //結果出力
    cout << ans + 1 << endl;
    return 0;
}