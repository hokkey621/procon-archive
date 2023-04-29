#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    //入力
    int T, N;
    cin >> T >> N;
    vector<int> diff (T+1, 0);
    rep(i, N) {
        int L, R;
        cin >> L >> R;
        diff[L] += 1;
        diff[R] -= 1;
    }
    vector<int> ans(T+1);
    ans[0] = diff[0];
    rep(i, T) {
        ans[i+1] = ans[i] + diff[i+1];
    }

    //出力
    rep(i, T) {
        cout << ans[i] << endl;
    }
    return 0;
}