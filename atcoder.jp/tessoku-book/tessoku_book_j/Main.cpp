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
    vector<int> A(N);
    rep(i, N) cin >> A[i];

    //処理
    vector<int> P(N), Q(N);
    P[0] = A[0];
    for(int i = 1; i < N; ++i) {
        P[i] = max(P[i-1], A[i]);
    }

    Q[N-1] = A[N-1];
    for(int i = N - 2; 0 <= i; --i) {
        Q[i] = max(Q[i+1], A[i]);
    }

    //出力
    int D;
    cin >> D;
    rep(d, D) {
        int L, R;
        cin >> L >> R;
        --L; --R;
        cout << max(P[L-1], Q[R+1]) << endl;
    }
    return 0;
}