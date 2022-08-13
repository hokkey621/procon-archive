#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    //入力
    int H1, W1;
    cin >> H1 >> W1;
    vector<vector<int> > A(H1, vector<int>(W1));
    rep(h, H1) rep(w, W1) cin >> A[h][w];
    int H2, W2;
    cin >> H2 >> W2;
    vector<vector<int> > B(H2, vector<int>(W2));
    rep(h, H2) rep(w, W2) cin >> B[h][w];

    //処理
    bool can = false;
    for(int w = 0; w < W1; ++w) {
        for(int h = 0; h < H1; ++h) {
            if(A[h][w] != B[0][0]) continue;

            vector<int> line;
            for(int x = 0, w2 = w; x < W2 && w2 < W1; ++w2) {
                if(A[h][w2] == B[0][x]) {
                    line.push_back(w2);
                    ++x;
                }
            }
            if((int)line.size() < W2) continue; //横の数が不十分

            vector<int> col;
            for(int y = 0, h2 = h; y < H2 && h2 < H1; ++h2) {
                if(A[h2][w] == B[y][0]) {
                    col.push_back(h2);
                    ++y;
                }
            }
            if((int)col.size() < H2) continue; //縦の数が不十分

       
            can = true;
            rep(i, (int)col.size()) {
                rep(j, (int)line.size()) {
                    // cout << A[col[i]][line[j]]; 
                    if(A[col[i]][line[j]] != B[i][j]) can = false;
                }
                // cout << '\n';
            }

            if(can) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}