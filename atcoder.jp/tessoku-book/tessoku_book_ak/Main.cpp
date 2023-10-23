#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep2(i, a, b) for(int i = (a); i < (b); ++i)
const ll MOD = 1000000007;


int main(void) {
    // input
    ll N, M, B;
    cin >> N >> M >> B;
    vector<ll> A(N), C(M);
    rep(i, N) cin >> A[i];
    rep(i, M) cin >> C[i];

    // solve
    ll sum_A = accumulate(A.begin(), A.end(), 0LL);
    ll sum_C = accumulate(C.begin(), C.end(), 0LL);

    // output
    cout << sum_A * M + B * N * M + sum_C * N << endl;
    return 0;
}