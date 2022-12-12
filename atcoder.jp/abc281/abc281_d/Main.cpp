#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


void chmax(ll& a, ll b) { a = max(a, b);}

ll dp[105][105][100];

int main(void) {
    int n, k, d;
    cin >> n >> k >> d;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    rep(i, n+1) rep(j, k+1) rep(r, d) dp[i][j][r] = -1;
    dp[0][0][0] = 0;

    rep(i, n) {
        int ni = i + 1;
        rep(j, k + 1) {
            rep(r, d) {
                if(dp[i][j][r] == -1LL) continue;
                {
                    //use
                    int nj = j + 1;
                    int nr = (r + a[i]) % d;
                    chmax(dp[ni][nj][nr], dp[i][j][r] + a[i]);
                }
                {
                    //notuse
                    chmax(dp[ni][j][r], dp[i][j][r]);
                }
            }
        }
    }
    cout << dp[n][k][0] << endl;
    return 0;
}