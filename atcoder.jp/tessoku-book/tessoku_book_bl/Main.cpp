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

    vector<vector<P>> G(N + 1);
    rep(i, M) {
        int a, b, c;
        cin >> a >> b >> c;
        G[a].push_back(make_pair(b, c));
        G[b].push_back(make_pair(a, c));
    }

    // solve
    vector<bool> decided(N + 1, false);
    const int INF = 1001001001;
    vector<int> cur(N + 1, INF);
    priority_queue<P, vector<P>, greater<P>> q;

    cur[1] = 0;
    q.push(make_pair(0, 1));

    // djikstra
    while(!q.empty()) {
        int pos = q.top().second;
        q.pop();

        if(decided[pos]) continue;
        
        decided[pos] = true;
        for(auto v: G[pos]) {
            int nxt = v.first;
            int cost = v.second;

            if(cur[nxt] > cur[pos] + cost) {
                cur[nxt] = cur[pos] + cost;
                q.push(make_pair(cur[nxt], nxt));
            }
        }
    }

    // output
    rep2(i, 1, N + 1) {
        if(cur[i] == INF) cout << -1 << "\n";
        else cout << cur[i] << "\n";
    }
    return 0;


}