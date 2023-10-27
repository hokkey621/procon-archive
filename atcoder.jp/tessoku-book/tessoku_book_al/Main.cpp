#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep2(i, a, b) for(int i = (a); i < (b); ++i)
const ll MOD = 1000000007;


int main(void) {
    // input 
    int D, N;
    cin >> D >> N;
    vector<int> L(N), R(N), H(N);
    rep(i, N) cin >> L[i] >> R[i] >> H[i];

    // solve
    vector<int> lim(365+1, 24);

    rep(i, N) {
        for(int j = L[i]; j <= R[i]; ++j) {
            lim[j] = min(lim[j], H[i]);
        }
    }

    // output
    int ans = 0;
    rep2(i, 1, D + 1) ans += lim[i];
    cout << ans << endl;
    return 0;

}