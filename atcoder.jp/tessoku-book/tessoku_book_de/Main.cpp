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
    vector <int> A(K + 1);
    cin >> N >> K;
    rep2(i, 1, K + 1) cin >> A[i];

    // solve
    vector <bool> dp(N + 1, false);
    rep(i, N + 1) {
        rep2(j, 1, K + 1) {
            if(A[j] <= i && !dp[i - A[j]]) {
                dp[i] = true;
            }
        }
    }

    // output
    if(dp[N]) cout << "First" << endl;
    else cout << "Second" << endl;
    return 0;
}