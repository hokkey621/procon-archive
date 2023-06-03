#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    //入力
    int N, S;
    cin >> N >> S;
    vector<int> A(N+1);
    for(int i = 1; i <= N; ++i) cin >> A[i];

    //dp
    vector<vector<bool>> dp(N+1, vector<bool>(S+1, false));
    dp[0][0] = true;

    for(int i = 1; i <= N; ++i) {
        for(int j = 0; j <= S; ++j) {
            if(dp[i-1][j]) dp[i][j] = true;
            if(A[i] <= j && dp[i-1][j - A[i]]) dp[i][j] = true;
        }
    }

    //出力
    if(dp[N][S]) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}