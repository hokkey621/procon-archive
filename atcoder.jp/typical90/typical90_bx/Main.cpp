#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(void){
    //入力
    int N;
    cin >> N;
    vector<ll> A(N);
    rep(i, N) cin >> A[i];
    
    //計算処理
    vector<ll> dp(2 * N, 0);
    rep(i, N) {
        dp[i + 1] = dp[i] + A[i];
    }
    rep(i, N) {
        dp[N + i + 1] = dp[N + i] + A[i];
    }
    
    if(dp[N] % 10 != 0) {
        cout << "No" << endl;
        return 0;
    }
    
    rep(l, 2 * N) {
        ll x = dp[N] / 10 + dp[l];
        ll ans = lower_bound(dp.begin(), dp.end(), x) - dp.begin();
        if(dp[ans] == x) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
