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
    vector<int> h(N+1);
    for(int i = 1; i <= N; ++i) cin >> h[i];

    //dp
    vector<int> dp(N+1);
    dp[1] = 0;
    dp[2] = abs(h[2] - h[1]);
    for(int i = 3; i <= N; ++i) {
        dp[i] = min(dp[i-1] + abs(h[i] - h[i-1]), dp[i-2] + abs(h[i] - h[i-2]));
    }

    //復元
    vector<int> ans;
    int p = N;
    while(true) {
        ans.push_back(p);
        if(p == 1) break;

        if(dp[p-1] + abs(h[p] - h[p-1]) == dp[p]) p -= 1;
        else p -= 2;
    }
    reverse(ans.begin(), ans.end());

    //出力
    int size = ans.size();
    cout << size << endl;
    rep(i, size) cout << ans[i] << endl;

    return 0;

}