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
    vector<int> dp(2 * N + 1 + 1, 0);
    dp[1] = 0;
    for(int i = 1; i <= N; ++i) {
        int a;
        cin >> a;
        dp[2 * i] = dp[2 * i + 1] = dp[a] + 1;
    }

    for(int i = 1; i <= 2 * N + 1; ++i) {
        cout << dp[i] << endl;
    }

    return 0;
}