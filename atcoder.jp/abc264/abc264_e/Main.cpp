#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;

int main(void) {
    //入力
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, M, E;
    cin >> N >> M >> E;
    vector<P> es;
    rep(i, E) {
        int u, v;
        cin >> u >> v;
        --u; --v;
        es.emplace_back(u, v);
    }

    int Q;
    cin >> Q;
    vector<int> qs(Q);
    vector<bool> cut(E, false);
    rep(i, Q) {
        int x;
        cin >> x;
        --x;
        qs[i] = x;
        cut[x] = true;
    }

    //処理
    dsu uf(N + 1); //発電所を一つにまとめる
    auto merge = [&](int u, int v) {
        u = min(u, N); //電源であるかどうか
        v = min(v, N);
        uf.merge(u, v);
    };

    rep(i, E) {
        if(!cut[i]) {
            //切られていなければ接続
            auto[u, v] = es[i];
            merge(u, v);
        }
    }

    vector<int> ans(Q);
    for(int i = Q - 1; 0 <= i; --i) {
        ans[i] = uf.size(N) - 1;
        auto [u, v] = es[qs[i]];
        merge(u, v);
    }

    //結果出力
    rep(i, Q) cout << ans[i] << endl;
    return 0;
}