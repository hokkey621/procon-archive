#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    int N, A, B;
    cin >> N >> A >> B;

    vector<bool> dp(N + 1);
    rep(i, N + 1) {
        if(A <= i && !dp[i - A]) dp[i] = true; //勝ちの状態
        else if(B <= i && !dp[i - B]) dp[i] = true; //勝ちの状態
        else dp[i] = false; //負けの状態
    }

    if(dp[N]) cout << "First" << endl;
    else cout << "Second" << endl;
    return 0;
}