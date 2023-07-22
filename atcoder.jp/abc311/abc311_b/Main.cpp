#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    //入力
    int N, D;
    cin >> N >> D;
    vector<string> S(N);
    rep(i, N) cin >> S[i];

    vector<bool> check(D, false);
    rep(i, D) {
        bool ok = true;
        rep(j, N) {
            if(S[j][i] == 'x') ok = false;
        }
        if(ok) check[i] = true;
    }

    
    int ans = 0;
    rep(i, D) {
        int tmp = 0;
        if(check[i] == 0) continue;

        ++tmp;
        for(int j = i + 1; j < D; ++j) {
            if(check[j]) ++tmp;
            else break;
        }
        ans = max(ans, tmp);
    }

    cout << ans << endl;
    return 0;
}