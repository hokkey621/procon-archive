#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep2(i, a, b) for(int i = (a); i < (b); ++i)
const ll MOD = 1000000007;


int main(void) {
    // input
    int N, K;
    cin >> N >> K;
    vector<int> A(N), B(N);
    rep(i, N) cin >> A[i] >> B[i];

    // solve
    int ans = -1;
    rep2(a, 1, 101) {
        rep2(b, 1, 101) {
            int cnt = 0;
            rep(i, N) {
                if((a <= A[i] && A[i] <= a + K) && (b <= B[i] && B[i] <= b + K)) ++cnt;
            }
            ans = max(ans, cnt);
        }
    }

    // output
    cout << ans << endl;
    return 0;
}