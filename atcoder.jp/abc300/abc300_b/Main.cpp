#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    int H, W;
    cin >> H >> W;
    char A[50][50];
    char B[50][50];
    char X[50][50];

    rep(i, H) rep(j, W) cin >> A[i][j];
    rep(i, H) rep(j, W) cin >> B[i][j];

    rep(di, H) {
        rep(dj, W) {
            // move
            rep(i, H) {
                rep(j, W) {
                    X[(i + di) % H][(j + dj) % W] = A[i][j];
                }
            }
            // check
            bool flag = true;
            rep(i, H) {
                rep(j, W) {
                    if(B[i][j] != X[i][j]) flag = false;
                }
            }
            if(flag) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}