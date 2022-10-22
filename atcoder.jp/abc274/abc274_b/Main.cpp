#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll MOD = 1000000007;


int main(void) {
    int H, W;
    cin >> H >> W;
    vector<string> C(H);
    rep(i, H) cin >> C[i];

    rep(j, W) {
        int cnt = 0;
        rep(i, H) if(C[i][j] == '#') ++cnt;
        cout << cnt << endl;
    }
}