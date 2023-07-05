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
    vector<int> A(N), B(N);
    for(int i = 1; i <= N - 1; ++i) cin >> A[i];
    for(int i = 1; i <= N - 1; ++i) cin >> B[i];

    //dp
    vector<int> dp(N+1, -100100100);
    dp[1] = 0;
    for(int i = 1; i <= N - 1; ++i) {
        dp[A[i]] = max(dp[A[i]], dp[i] + 100);
        dp[B[i]] = max(dp[B[i]], dp[i] + 150);
    }

    //出力
    cout << dp[N] << endl;
    return 0;
}