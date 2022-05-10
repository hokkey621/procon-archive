#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)


struct UnionFind {
    vector<int> par, rank, siz;
    
    //初期化
    UnionFind(int n) : par(n, -1), rank(n, 0), siz(n, 1) {}

    //寝を求める
    int root(int x) {
        if(par[x] == -1) return x;
        else return par[x] = root(par[x]);
    }

    //xとyが同じグループか
    bool issame(int x, int y) {
        if(root(x) == root(y)) return true;
        else return false;
    }

    //グループxとグループyの併合
    bool unit(int x, int y) {
        int rx = root(x);
        int ry = root(y);
        if(rx == ry) return false; //既に同じ

        if(rank[rx] < rank[ry]) swap(rx, ry);

        par[ry] = rx;
        if(rank[rx] == rank[ry]) ++rank[rx]; //rank調整
        siz[rx] += siz[ry];
        return true;
    }

    //根付き木のサイズを調べる
    int size(int x) {
        return siz[root(x)];
    }
};


//グローバル変数
int H, W;
vector<vector<bool> > squares(2020, vector<bool>(2020, false));
UnionFind uf(4000010);


void q1(int r, int c) {
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    rep(i, 4) {
        int nr = r + dx[i];
        int nc = c + dy[i];
        if(!squares[nr][nc]) continue;
        
        int hash1 = (r - 1) * W + (c - 1);
        int hash2 = (nr - 1) * W + (nc - 1);
        uf.unit(hash1, hash2);
    }
    squares[r][c] = true; //赤色に塗る
}


bool q2(int ra, int ca, int rb, int cb) {
    if(squares[ra][ca] == false || squares[rb][cb] == false) return false; //赤色ではなかったらfalse
    
    int hash1 = (ra - 1) * W + (ca - 1);
    int hash2 = (rb - 1) * W + (cb - 1);
    
    return uf.issame(hash1, hash2);
}


int main() {
	//入力
    int Q;
    cin >> H >> W >> Q;
    int N = H * W;
    
    //処理
    rep(i, Q) {
        int q;
        cin >> q;
        
        if(q == 1) {
            int r, c;
            cin >> r >> c;
            q1(r, c);
        } else {
            int ra, ca, rb, cb;
            cin >> ra >> ca >> rb >> cb;
            if(q2(ra, ca, rb, cb)) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
	return 0;
}