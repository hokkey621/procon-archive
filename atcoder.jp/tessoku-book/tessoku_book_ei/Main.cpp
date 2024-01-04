#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep2(i, a, b) for(int i = (a); i < (b); ++i)
const ll MOD = 1000000007;

int N, M;
vector<int> G[100009];
bool visited[100009];
stack<int> ans, path;


void dfs(int pos) {
    if(pos == N) {
        ans = path;
        return;
    }

    visited[pos] = true;

    for(int nxt: G[pos]) {
        if(visited[nxt]) continue;
        path.push(nxt);
        dfs(nxt);
        path.pop();
    }
    return;
}


int main(void) {
    // input
    cin >> N >> M;

    rep(i, M) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    // solve
    for(auto v: visited) v = false;
    path.push(1);
    dfs(1);

    vector<int> reversed_ans;
    while(!ans.empty()) {
        reversed_ans.push_back(ans.top());
        ans.pop();
    }
    reverse(reversed_ans.begin(), reversed_ans.end());

    // output
    for(int v: reversed_ans) cout << v << "\n";
    return 0;
}