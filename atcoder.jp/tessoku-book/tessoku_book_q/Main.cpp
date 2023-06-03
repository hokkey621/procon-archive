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
    vector<int> A(N+1), B(N+1);
    for(int i = 2; i <= N; ++i) cin >> A[i];
    for(int i = 3; i <= N; ++i) cin >> B[i];

    //dpで最適値を計算
    vector<int> dp(N+1);
    dp[1] = 0;
    dp[2] = A[2];
    for(int i = 3; i <= N; ++i) {
        dp[i] = min(dp[i-1] + A[i], dp[i-2] + B[i]);
    }

    //経路を復元
    vector<int> ans;
    int place = N;
    while(place != 1) {
        ans.push_back(place);

        if(dp[place-1] + A[place] == dp[place]) place = place - 1;
        else place = place - 2;
    }
    ans.push_back(1);
    reverse(ans.begin(), ans.end());

    //出力
    int size = ans.size();
    cout << size << endl;
    for(auto x : ans) cout << x << endl;
    return 0;
}