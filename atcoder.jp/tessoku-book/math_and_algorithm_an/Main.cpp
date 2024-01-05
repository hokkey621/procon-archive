#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep2(i, a, b) for(int i = (a); i < (b); ++i)
const ll MOD = 1000000007;


int main(void) {
    // input
    int N, M;
    cin >> N >> M;

    vector<vector<int>> G(N + 1);
    rep(i, M) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    // solve
    vector<int> dist(N + 1, -1);
    dist[1] = 0;
    queue<int> q;
    q.push(1);
    while(!q.empty()) {
        int pos = q.front();
        q.pop();
        for(int v: G[pos]) {
            if(dist[v] != -1) continue;

            dist[v] = dist[pos] + 1;
            q.push(v);
        }
    }

    // output
    rep2(i, 1, N + 1) cout << dist[i] << "\n";
    return 0;
}