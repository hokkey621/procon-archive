#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;

// Union-Find
struct UnionFind {
    vector<int> par, rank, siz;

    // 構造体の初期化
    UnionFind(int n) : par(n,-1), rank(n,0), siz(n,1) { }

    // 根を求める
    int root(int x) {
        if (par[x]==-1) return x; // x が根の場合は x を返す
        else return par[x] = root(par[x]); // 経路圧縮
    }

    // x と y が同じグループに属するか (= 根が一致するか)
    bool issame(int x, int y) {
        return root(x)==root(y);
    }

    // x を含むグループと y を含むグループを併合する
    bool unite(int x, int y) {
        int rx = root(x), ry = root(y); // x 側と y 側の根を取得する
        if (rx==ry) return false; // すでに同じグループのときは何もしない
        // union by rank
        if (rank[rx]<rank[ry]) swap(rx, ry); // ry 側の rank が小さくなるようにする
        par[ry] = rx; // ry を rx の子とする
        if (rank[rx]==rank[ry]) rank[rx]++; // rx 側の rank を調整する
        siz[rx] += siz[ry]; // rx 側の siz を調整する
        return true;
    }

    // x を含む根付き木のサイズを求める
    int size(int x) {
        return siz[root(x)];
    }
};

//グローバル変数
ll D;

bool check(ll x1, ll y1, ll x2, ll y2) {
    if(((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) <= D * D) return true;
    else return false;
}


int main() {
    //入力
    int N;
    cin >> N >> D;
    vector<ll> X(N), Y(N);
    rep(i, N) cin >> X[i] >> Y[i];
    
    //距離D内にあるか判定

    // 要素数 N の Union-Find を用意する
    UnionFind uf(N);

    rep(i, N) {
        for(int j = i + 1; j < N; ++j) {
            bool res = check(X[i], Y[i], X[j], Y[j]);
            if(res) {
                uf.unite(i, j);
            }
        }
    }

    rep(i, N) {
        if(uf.issame(0, i)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}