#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    // 入力
    int H, W;
    cin >> H >> W;
    vector<vector<int> > P(H, vector<int>(W));
    rep(i, H) rep(j, W) cin >> P[i][j];

    // 処理
    int ans = 0;
    for(int bit = 1; bit < (1<<H); ++bit) {
        vector <int> S;
        for(int h = 0; h < H; ++h) {
            if(bit & (1 << h)) {
                S.push_back(h);
            }
        }
        // ステップ1
        vector <int> R;
        rep(i, W) {
            int r = P[S[0]][i];
            bool can = true;
            rep(j, S.size()) {
                if(P[S[j]][i] != r) {
                    can = false;
                    break;
                }
            }

            if(can) R.push_back(r);
        }

        // ステップ2
        map<int, int> mp;
        int ret = 0;
        rep(i, R.size()) {
            mp[R[i]] += 1;
            ret = max(ret, mp[R[i]]);
        }
        ret *= S.size();
        ans = max(ans, ret);
    }

    // 結果出力
    cout << ans << endl;
    return 0;
}