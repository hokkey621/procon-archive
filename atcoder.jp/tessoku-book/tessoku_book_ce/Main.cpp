#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    //入力
    int N;
    cin >> N;
    vector<int> pos(N+1), neg(N+1);
    pos[0] = neg[0] = 0;
    rep(i, N) {
        int A;
        cin >> A;
        if(A == 1) {
            pos[i+1] = pos[i] + 1;
            neg[i+1] = neg[i];
        } else {
            pos[i+1] = pos[i];
            neg[i+1] = neg[i] + 1;
        }
    }

    //出力
    int Q;
    cin >> Q;
    rep(i, Q) {
        int L, R;
        cin >> L >> R;
        if((pos[R] - pos[L-1]) > (neg[R] - neg[L-1])) {
            cout << "win" << endl;
        } else if((pos[R] - pos[L-1]) == (neg[R] - neg[L-1])) {
            cout << "draw" << endl;
        } else {
            cout << "lose" << endl;
        }
    }
    return 0;
}