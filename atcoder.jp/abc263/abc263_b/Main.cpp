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
    vector<int> P(N + 1);
    rep(i, N - 1) {
        cin >> P[i + 2];
    }

    //処理
    int ans = 0;
    int x = N;
    while(x != 1) {
        ++ans;
        x = P[x];
    }

    //出力
    cout << ans << endl;
}