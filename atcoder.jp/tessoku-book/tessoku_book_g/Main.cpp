#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    //入力
    int D, N;
    cin >> D >> N;
    vector<int> diff(D+1, 0);
    rep(i, N) {
        int L, R;
        cin >> L >> R;
        --L; --R;
        diff[L] += 1;
        diff[R+1] -= 1;
    }
    //処理
    vector<int> cnt(D+1);
    cnt[0] = diff[0];
    rep(i, D-1) {
        cnt[i+1] = cnt[i] + diff[i+1];
    }
    //出力
    rep(i, D) {
        cout << cnt[i] << endl;
    }
    return 0;
}