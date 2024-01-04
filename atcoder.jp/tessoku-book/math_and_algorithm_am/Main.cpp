#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep2(i, a, b) for(int i = (a); i < (b); ++i)
const ll MOD = 1000000007;


void dfs(int pos, vector<vector<int> > &G, vector<bool> &visited) {
    visited[pos] = true;
    for(int next : G[pos]) {
        if(visited[next]) continue;
        dfs(next, G, visited);
    }
}


int main(void) {
    // input
    int N, M;
    cin >> N >> M;
    vector<vector<int> > G(N + 1);
    rep(i, M) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    
    // solve
    vector<bool> visitied(N + 1, false);
    dfs(1, G, visitied);

    bool is_all_visited = true;
    rep2(i, 1, N + 1) {
        if(!visitied[i]) {
            is_all_visited = false;
            break;
        }
    }

    // output
    if(is_all_visited) cout << "The graph is connected." << endl;
    else cout << "The graph is not connected." << endl;
    return 0;
}