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
    vector<vector<bool> > dp(N+1, vector<bool>(S+1, false));
    dp[0][0] = true;
    for(int i = 1; i <= N; ++i) {
        for(int j = 0; j <= S; ++j) {
            if(dp[i-1][j]) dp[i][j] = true;
            if(A[i] <= j && dp[i-1][j - A[i]]) dp[i][j] = true;
        }
    }

    //dpの復元
    if(dp[N][S]) {
        vector<int> ans;
        int p = S;
        for(int i = N; 1 <= i; --i) {
            if(dp[i-1][p] == false) {
              ans.push_back(i);
              p -= A[i];
            }
        }
        reverse(ans.begin(), ans.end());

        //出力
        int size = ans.size();
        cout << size << endl;
        rep(i, size) cout << ans[i] << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}