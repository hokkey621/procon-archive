#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep2(i, a, b) for(int i = (a); i < (b); ++i)
const ll MOD = 1000000007;


int main(void) {
    // input
    int N;
    cin >> N;
    vector<vector<int> > A(N + 1, vector<int>(N + 1));
    rep2(i, 1, N + 1) {
        rep2(j, 1, N + 1) {
            cin >> A[i][j];
        }
    }

    // solve
    int Q;
    cin >> Q;
    vector<int> t(N + 1); // x行目には元々何行目の値が書かれているか
    rep(i, N + 1) t[i] = i;

    rep(i, Q) {
        int type, x, y;
        cin >> type >> x >> y;

        if(type == 1) {
            swap(t[x], t[y]);
        } else {
            cout << A[t[x]][y] << '\n';
        }
    }

    return 0;
}